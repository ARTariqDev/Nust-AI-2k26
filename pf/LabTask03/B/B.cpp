#include <iostream>

using namespace std;

int main () {
    int totalSeconds, hours, remainingSeconds, minutes, seconds;
    cout << "Enter Total Seconds: " ;
    cin >> totalSeconds;
    hours = totalSeconds / 3600;
    remainingSeconds = totalSeconds % 3600;
    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;
    
    cout << totalSeconds << " seconds -> " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " Second(s)" ;

    return 0;
}