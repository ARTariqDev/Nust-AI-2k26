#include <iostream>
using namespace std;

int main () {
    int num1, num2;
    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the Second number: ";
    cin >> num2;
    bool Comparisons[6] = {num1 == num2,num1 != num2,num1 > num2,num1 < num2,num1 >= num2,num1 <= num2}; //using this to fullfill the "boolean variable" requirement
    cout << num1 << " == " << num2 << " : " << Comparisons[0] << endl;
    cout << num1 << " != " << num2 << " : " << Comparisons[1] << endl;
    cout << num1 << " >  " << num2 << " : " << Comparisons[2]<< endl;
    cout << num1 << " <  " << num2 << " : " << Comparisons[3]<< endl;
    cout << num1 << " >= " << num2 << " : " << Comparisons[4] << endl;
    cout << num1 << " <= " << num2 << " : " << Comparisons[5] << endl;
    return 0;
}