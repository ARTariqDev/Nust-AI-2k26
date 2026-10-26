#include <iostream>
#include <cmath>

using namespace std;

double distanceFromOrigin(double x, double y);
double squareValue(double n);;

int main() {
    double X,Y;
    cout << "Enter an X coordinate: " ;
    cin >> X;
    cout << "Enter a Y coordinate: " ;
    cin >> Y;

    cout << "The point (" << X << "," << Y << ")" << " is at a distance of: " << distanceFromOrigin(X,Y) << " units from the origin" << endl;
    cout << "The square of 5 is: " << squareValue(5.0);


    return 0;
}

double distanceFromOrigin(double x, double y) {
    return (sqrt( pow(x, 2) + pow(y, 2) ));
}

double squareValue(double n) { return pow(n, 2) ;}


