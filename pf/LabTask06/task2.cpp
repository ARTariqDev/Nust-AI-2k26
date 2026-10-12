#include <iostream>
#include <string>

using namespace std;

int main () {

    int packetID;
    cout << "Enter packet id: ";
    cin >> packetID;
    int temp = packetID;
    int digit;
    string reversedID = "" ;
    int digitsum = 0;
    int count = 0;
    while (temp > 0) {
        count += 1;
        digit = temp % 10;
        digitsum += digit;
        reversedID += to_string(digit); //concatinate it as string
        temp /=10;
    }
    cout << "original ID: " << packetID << endl;
    cout << "Reversed ID: " << reversedID <<endl;
    cout << "CheckSum: " << digitsum << endl;
    cout << "Number of digits: " << count << endl;

    if (reversedID == to_string(packetID)) {
        cout << "Mirror ID";
    } else {
        cout << "normal ID";
    }

    return 0;


}