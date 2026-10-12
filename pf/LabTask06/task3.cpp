#include <iostream>

using namespace std;

int main() {
    int limit;
    cout << "Enter limit (2 to 100: ";
    cin >> limit;

    int primeCount = 0;
    int primeSum = 0;

    cout << "Prime channls: ";

    for (int i = 2; i <= limit; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
            primeSum += i;
            primeCount++;
        }
    }

    cout << endl;
    cout << "Total Prime Cont: " << primeCount << endl;
    cout << "Total Prime sum: " << primeSum << endl;

    return 0;
}