#include <iostream>


using namespace std;

int main () {
    int count,sum, num;

    count = 0;
    sum = 0;
    for (int i = 1; i <= 365; i++) {
        sum += i;
        count += 1;
    }
    cout << "Sum is: " << sum;
    return 0;
}