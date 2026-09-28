#include <iostream>
#include <bitset>


using namespace std;

int main () {

    unsigned int a,b;

    cout << "Enter a valur for a: " ;
    cin >> a;
    cout << "Enter a valur for b: " ;
    cin >> b;

    if (a > 255 || b > 255) {
        cout << "Please enter values from 0 to 255." << endl;
        return 1;
    }

    cout << "a as a decimal: " << a << endl;
    cout << "b as a decimal: " << b << endl;
    bitset<8> binary_a(a);

    cout << "a as a Binary Number: " << binary_a << endl;

    bitset<8> binary_b(b);
    cout << "b as a Binary Number: " << binary_b << endl;

    int operation1 = a & b;
    int operation2 = a | b;
    int operation3 = a ^ b;
    int operation4 = a << 2;
    int operation5 = b >> 3;

    cout << "a & b in decimal: " << operation1 << endl;

    cout << "a & b in binary: " << bitset<8>(operation1) << endl;
    cout << "a | b in decimal: " << operation2 << endl;
    cout << "a | b in binary: " << bitset<8>(operation2) << endl;

    cout << "a ^ b in decimal: " << operation3 << endl;

    cout << "a ^ b in binary: " << bitset<8>(operation3) << endl;

    cout << "a << 2 in decima: " << operation4 << endl;
    cout << "a << 2 in binry: " << bitset<8>(operation4) << endl;

    cout << "b >> 3 in decimal: " << operation5 << endl;

    cout << "b >> 3 in binary: " << bitset<8>(operation5) << endl;

    return 0;
}