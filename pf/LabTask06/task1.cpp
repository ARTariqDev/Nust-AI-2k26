#include <iostream>

using namespace std;

int main () {
    double principalAmount, annualRate;
    int years;
    cout << "Enter principal amount : ";
    cin >> principalAmount;
    cout << "Enter annualRate: ";
    cin >> annualRate;
    cout << "Enter Years: ";
    cin >> years;


    double currentBalance = principalAmount;
    for (int i = 1; i <= years; i++) {
        currentBalance = currentBalance + currentBalance * (annualRate / 100.0);
        cout << "year Number: " << i << " current Balance: " << currentBalance << endl;
    }

    double totalInterest = currentBalance - principalAmount;
    cout << "Total Interest: " << totalInterest;
    return 0;

}