#include <iostream>

using namespace std;

int main () {

    int choice;
    bool occupied = false;
    do {
        cout << "1) Store a parcel \n2) Collect the parcel\n3) Check locker status\n0) Exit kiosk" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (!occupied) {
                    occupied = true;
                    cout << "parcel stored" << endl;
                } else {
                    cout << "Locker already occupied" << endl;
                }
                break;
            case 2:
                if (occupied) {
                    occupied = false;
                    cout << "parcel collected" << endl;
                } else {
                    cout << "Locker is empty" << endl;
                }
                break;
            case 3:
                if (occupied) {
                    cout << "Locker status: Occupied" << endl;
                } else {
                    cout << "Locker status: Empty" << endl;
                }
                break;
            case 0:
                cout << "Exit kiosk" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    while (choice != 0);

    return 0;
}