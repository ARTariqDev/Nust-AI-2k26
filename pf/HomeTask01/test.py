#!/usr/bin/env python3
"""
List the newest models for each provider you want to benchmark.
 
    python3 find_models.py            # OpenRouter vendors always work, no key needed
    GROQ_API_KEY=gsk_... python3 find_models.py   # also lists Groq's own models
 
Copy the printed IDs into:  python3 llm_grievance_benchmark.py --models <ids...>
(Groq IDs are printed with the 'groq:' prefix already added.)
"""
import datetime, os, requests
 
VENDORS = ["openai", "anthropic", "google", "deepseek", "x-ai"]   # add more here
TOP = 5
 
# ---- OpenRouter: openai, anthropic, google, deepseek, x-ai ----
ms = requests.get("https://openrouter.ai/api/v1/models", timeout=30).json()["data"]
for v in VENDORS:
    mine = [m for m in ms if m["id"].startswith(v + "/") and ":free" not in m["id"]]
    print(f"\n== {v} (via OpenRouter) ==")
    print(f"{'date':<11}{'$/M output':>11}  id")
    for m in sorted(mine, key=lambda m: m["created"], reverse=True)[:TOP]:
        price = float(m["pricing"]["completion"]) * 1_000_000
        print(f"{datetime.date.fromtimestamp(m['created'])!s:<11}{price:>11.2f}  {m['id']}")
 
# ---- Groq: its own API (needs a free key from console.groq.com) ----
key = os.environ.get("GROQ_API_KEY")
print("\n== groq (own API) ==")
if not key:
    print("Set GROQ_API_KEY to list these (free key at console.groq.com).")
else:
    r = requests.get("https://api.groq.com/openai/v1/models",
                     headers={"Authorization": f"Bearer {key}"}, timeout=30)
    r.raise_for_status()
    # Skip speech / safety models; keep chat models, newest first
    skip = ("whisper", "guard", "tts", "playai", "distil-whisper")
    rows = [m for m in r.json()["data"] if m.get("active", True)
            and not any(s in m["id"].lower() for s in skip)]
    for m in sorted(rows, key=lambda m: m.get("created", 0), reverse=True)[:TOP * 2]:
        d = datetime.date.fromtimestamp(m.get("created", 0))
        print(f"{d!s:<11}{'':>11}  groq:{m['id']}")
 