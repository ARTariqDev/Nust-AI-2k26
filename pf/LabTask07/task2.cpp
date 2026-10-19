#include <iostream>
#include <cmath>

using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2);
void printTravelAdvice(double distance);


int main() {
    double x1,y1,x2,y2;

    cout << "Enter a value for x1: ";
    cin >> x1;
    cout << "Enter a value for y1: ";
    cin >> y1;
    cout << "Enter a value for x2: ";
    cin >> x2;
    cout << "Enter a value for y2: ";
    cin >> y2;
    double distance = calculateDistance(x1,y1,x2,y2);
    cout << "Distance: " << distance << endl;
    printTravelAdvice(distance);
    return 0;
}

double calculateDistance(double x1, double y1, double x2, double y2) {

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void printTravelAdvice(double distance) {
    string output = (distance > 5.0) ? "Use transport": (distance > 1.0) ? "Use campus shuttle": "Walk";
    cout << output << endl;

}