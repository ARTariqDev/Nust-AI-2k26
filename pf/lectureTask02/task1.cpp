#include <iostream>

using namespace std;

int main () {
    string result = "";
    for (int i = 1; i <=5 ; i++) {
        result += " " + to_string(i) + " ";
        cout << result << endl;
    }
    
}