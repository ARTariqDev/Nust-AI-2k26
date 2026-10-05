#include <iostream>

using namespace std;


int main () {
    int headsetBattery; //0-100
    bool controllerConnected, playAreaClear; //1 or 0

    cout << "Enter headset Battery: ";
    cin >> headsetBattery;
    cout << "Is the Controller Connected? enter 1 or 0 for true and false respectivly: ";
    cin >> controllerConnected;
    cout << "Is the play area clear? enter 1 or 0 for true and false respectivly: ";
    cin >> playAreaClear;

    if (headsetBattery < 20) {
        cout << "Battery warning: charge soon" << endl;
    }

    if (headsetBattery >= 20 && controllerConnected && playAreaClear) {
        cout << "VR Session can Start" << endl;
    } else {
        cout << "VR session blocked"<<endl;
        cout << "See reasons below: "<<endl;
        if (headsetBattery < 20) {
            cout << "Headset battery is: " << headsetBattery << "%" << endl << "please charge it to at least 20% to begin the session" << endl;
        }
        if (!controllerConnected) {
            cout << "ERROR: please connect controller to begin session" << endl;
        }
        if (!playAreaClear) {
            cout << "ERROR: please clear the play area in order to begin the session";
        }
    }
    return 0;
}