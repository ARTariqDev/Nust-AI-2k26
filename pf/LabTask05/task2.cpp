#include <iostream>

using namespace std;

int main () {

    double packageWeight, distanceKm;
    int batteryLevel, windSpeed;

    cout << "Enter package weight: " << endl;
    cin >> packageWeight;
    cout << "Enter distance in Km: " << endl;
    cin >> distanceKm;
    cout << "Enter battery level: " << endl;
    cin >> batteryLevel;
    cout << "Enter windspeed: " << endl;
    cin >> windSpeed;

    if (windSpeed >= 30) {
        cout << "RED wind zone" << endl;
    } 
    else if (windSpeed >= 16) {
        cout << "YELLOW wind zone" << endl;
    }
    else if (windSpeed <= 15 && windSpeed >= 0) { // adding compund condition to prevent negative values
        cout << "GREEN wind zone" << endl;
    }
    else {
        cout << "error, invalid input" << endl;
    }
    if ( windSpeed <= 30) {
        if (batteryLevel >= 60) {
            if (packageWeight <= 3.0 && distanceKm <= 10.0) {
                cout << "Launch approved" << endl;
            } else {
                cout << "Manual review: load or route exceeds mission limit" << endl;
            }
        } else {
            cout << "Recharge before mission" << endl;
        }
    } else {
        cout << "Mission postponed: wind too strong" << endl;
    }
    return 0;
}