#include <iostream>
#include <string>
using namespace std;

void Recur(double &balance) { //pasing balance by refernce so it can be modified inside the funcrtion
    int userChoice;
    double depositAmount;
    double withdrawAmount;
    cout << "====================\n     Bank Menu\n====================\n";
    cout << "Please Choose an option by entering numbers 1-4" << endl;
    cout << "1) Check Balance\n2) Deposit Amount\n3) Withdraw Amount\n4) Exit" << endl;
    cout << "Enter Choice: ";
    cin >> userChoice;
    // cout << userChoice; used this for testing so im commenting it out
    switch (userChoice) {
        case 1:
            cout << "Your Balance is:  Rs" << balance << endl;
            Recur(balance);
            break;
        case 2:
            cout << "Enter Amount to deposit: " ;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Amount deposited, new balance is:  Rs" << balance << endl;
            Recur(balance);
            break;
        case 3:
            cout << "Enter Amount to withdraw: " ;
            cin >> withdrawAmount;
            if (withdrawAmount > balance) {
                cout << "Error, withdraw amount is more then account balance, please enter an amount less then the balance" << endl;
                Recur(balance);
            }  else {
                balance -= withdrawAmount;
                cout << "Amount withdrawn, new balance is: " << balance << endl;
                Recur(balance);
            }
            break;
        case 4:
            cout << "====================\n  Session Finished\n====================\n";
            break;
        default:
            cout << "Error, Invalid choice input entered, please enter a valid choice Number between 1 and 4" << endl;
            Recur(balance);
            break;
    }
}

int main () {

    double userBalance;
    userBalance = 1000.0; //default amount is 1k for testing
    Recur(userBalance);

    return 0;
}