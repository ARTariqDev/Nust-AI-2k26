#include <iostream>
using namespace std;

void table( int number,int &start) {

    cout << number << " x " << start << " = " << number*start << endl;
    start+=1;
    if (start <= 10) {

        table(number,start);
    }
}

int main() {
    int intial = 1;
    table(2,intial);
    return 0;
}