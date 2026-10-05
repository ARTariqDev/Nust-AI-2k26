#include <iostream>

using namespace std;

int main () {
    int count, num;
    count = 0;
    while (count < 10) {
        cout << "Enter a number: ";
        cin >> num;
        if (num%2 == 1) {
            count+=1;
        }
        cout << "Current odd count : " << count << endl;

    }
    return 0;
}