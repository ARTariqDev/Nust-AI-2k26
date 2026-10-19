#include <iostream>

using namespace std;

void printDivider();

int main () {
    printDivider();
    cout << "CS110 FUNCTION PRACTICE" << endl;
    printDivider();
    cout << "Prototype -> Call -> Definition" << endl;
    printDivider();
    return 0;
}

void printDivider() {

    for(int i = 0; i < 30; i++) {
        cout << "-";
    }
    cout << endl; // adding this outside for loop so that it doesnt push hyphen to next line
}