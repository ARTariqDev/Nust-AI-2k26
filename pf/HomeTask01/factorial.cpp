#include <iostream>
using namespace std;

int factorial(int num) {
    if (num <= 1) {
        return 1;
    }

    return num * factorial(num - 1);
}

int main() {
    int number = 5;
    cout << number << "! = " << factorial(number) << endl;

    return 0;
}