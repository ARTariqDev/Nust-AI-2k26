#include <iostream>
using namespace std;



int multiply(int a, int b)      // definition
{
    return a * b;
}


void printLine();

int main()
{
    int answer = multiply(6, 7); // function call
    printLine();
    cout << "Answer = " << answer << endl;
    printLine();
    return 0;
}


void printLine() {
    cout << "--------------------" << endl;
}