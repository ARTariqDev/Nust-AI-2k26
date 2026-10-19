#include <iostream>

using namespace std;

int countDigits(int pin);
int digitSum(int pin);
bool isStrongPin(int pin);


int main() {
    int pin;

    cout << "Enter a PIN: ";
    cin >> pin;
    cout << "Digit count: " << countDigits(pin) << endl;
    cout << "Digit sum: " << digitSum(pin) << endl;
    cout << (isStrongPin(pin) ? "Strong Pin" : "Weak Pin");
    return 0;
}


int countDigits(int pin) {
    int count = 1;
    int temp = pin;
    while (temp >= 10) {
        temp /= 10;
        count += 1;
    }
    return count;
}

int digitSum(int pin) {
    int sum = 0;
    int temp = pin;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

bool isStrongPin(int pin) {
   bool val =(countDigits(pin) == 4) ? ((digitSum(pin) >= 20) ? ((pin % 10) % 2 == 1) : false) : false; 
   return val;
}