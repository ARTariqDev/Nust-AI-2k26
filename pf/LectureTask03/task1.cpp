#include <iostream>
#include <cmath>
using namespace std;

int sum (int a, int b);
double calculateArea (double length, double width);


int sum (int a, int b) {

    return a + b;
}

bool isEven (int x) {
    return ((x % 2 == 0) ? 1 : 0);
}

double calculateArea (double length, double width) {
    return length * width;
}

void swapByRef( int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}




int main () {
    int num1 , num2;
    double inLength, inWidth;
    cout << "Enter a number: " ;
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << (isEven(sum(num1,num2)) ? "Even" : "Odd" ) << endl;
    cout << "Enter a Length: ";
    cin >> inLength;
    cout << "Enter a wdith: ";
    cin >> inWidth;
    cout << "Area is: " << calculateArea(inLength,inWidth) << endl;

    int val1 = 1;
    int val2 = 2;
    swapByRef(val1,val2);
    cout << "Val1: " << val1 << endl << "Val2: " << val2 << endl;
    return 0;
}