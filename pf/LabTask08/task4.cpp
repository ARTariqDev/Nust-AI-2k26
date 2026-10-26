#include <iostream>

using namespace std;


void addBonusByValue(int score);
void addBonusByReference(int &score);

int main () {
    int score = 70;
    cout << "Score: " << score << endl;
    addBonusByValue(score);
    cout << "Score: " << score << endl;
    score = 70;
    addBonusByReference(score);
    cout << "Score: " << score << endl;
    return 0;
}

void addBonusByValue(int score)
{
    score = score + 5;
    cout << "Inside value function: " << score << endl;
}

void addBonusByReference(int &score)
{
    score = score + 5;
    cout << "Inside reference function: " << score << endl;
}
