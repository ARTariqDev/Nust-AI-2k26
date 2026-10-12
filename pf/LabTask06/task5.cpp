#include <iostream>

using namespace std;

int main () {

    int code;
    cout << "Enter emrgency code: ";
    cin >> code;

    int originalCode = code; 
     int temp = code;
    int divisor = 1;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }

    int digitCount = 0;
    temp = code;

    while (divisor > 0) {
        int digit = (temp / divisor) % 10;
         digitCount += 1;

        switch (digit) {
            case 0:
            cout << "Zro ";
                break;
            case 1:
                cout << "One ";
                break;
            case 2:
                cout << "Two ";
                break;
            case 3:
                 cout << "Thre ";
                break;
            case 4:
                cout << "Four ";
                break;
            case 5:
                cout << "Five ";
                break;
            case 6:
                cout << "Six ";
                break;
            case 7:
                cout << "Seven ";
                break;
            case 8:
                cout << "Eight ";
                break;
            case 9:
                cout << "Nine ";
                break;
        }

        temp %= divisor;
        divisor /= 10;
    }

    cout << endl;
    cout << "Total spokrn digits: " << digitCount << endl;

    return 0;
}