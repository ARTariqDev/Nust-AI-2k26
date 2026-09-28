#include <iostream>

using namespace std;

int main () {
    double a,b,c,d,r,result;
    // the calculation can inculde decimal answers so to preservethe most amount of info, 
    //I'm using the 'double' data type as opposed to int
    cout << "enter a value for a: " ;
    cin >> a;
    cout << "enter a value for b: " ;
    cin >> b;
    cout << "enter a value for c: " ;
    cin >> c;
    cout << "enter a value for d: ";
    cin >> d;
    cout << "enter a value for r: " ;
    cin >> r;

    result = 4/(3 * (r+34)) -9 * (a+b*c) + ( (3+ d*(2+a))/(a+b*d));
    // 4/(3 * (r+34)) term 1
    //  -9 * (a+b*c) term 2
    // + ( (3+ d*(2+a))/(a+b*d)) term 3
    cout << "Result = " << result << endl;
    return 0;
}