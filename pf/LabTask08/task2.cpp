#include <iostream>

using namespace std;

double calculateArea(double length, double width);
double calculatePerimeter(double length, double width);
void displayResult(double area, double perimeter);

int main () {
    double userLength,userWidth;

    cout << "Enter Length: ";
    cin >> userLength;
    cout << "Enter Width: ";
    cin >> userWidth;

    displayResult(calculateArea(userLength,userWidth),calculatePerimeter(userLength,userWidth));

    return 0;
}

double calculateArea(double length, double width) {
    return length*width;
}

double calculatePerimeter(double length, double width) {
    return 2*(length + width);
}

void displayResult(double area, double perimeter) {
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

