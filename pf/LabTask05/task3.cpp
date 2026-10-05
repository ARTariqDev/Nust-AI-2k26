#include <iostream>
#include <string>

using namespace std;

int main () {
    int command, batteryLevel;
   
    cout << "Enter batterylevel (0-100): " << endl;
    cin >> batteryLevel;

    string output = batteryLevel >= 50 ? "POWER OK" : "LOW POWER";
    cout << output << endl;
    cout << "Enter Command (1-4): " << endl;
    cout << "1 -> Capture panorama\n2 -> Collect rock sample\n3 -> Transmit data\n4 -> Return to base" << endl;
    cin >> command;

    switch (command) {
        case 1:
            cout << "Panorama Captured";
            break;
        case 2:
            cout << "Rock Sample Collected";
            break;
        case 3:
            cout << "Data Transmitted" ;
            break;
        case 4:
            cout << "Returned to Base" ;
            break;
        default:
            cout << "Invalid rover command";
            break;
    }

    return 0;
}