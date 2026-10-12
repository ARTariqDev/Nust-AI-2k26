#include <iostream>

using namespace std;

int main () {
    char choice;
    do {
        cout << "Enter Y or N: ";
        cin >> choice;

        if (choice != 'Y' && choice != 'N' && choice != 'y' && choice != 'n') {
            cout << "Invalid choice";
        }
    }

    while (choice != 'y' && choice != 'N' && choice != 'y' && choice != 'n');
    cout << "Valid Choice";
}