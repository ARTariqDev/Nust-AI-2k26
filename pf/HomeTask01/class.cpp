#include <iostream>

using namespace std;

int main () {
    int total,count;
    double marks,sum;
    cout << "Enter Number of students: " ;
    cin >> total;
    sum = 0;
    count = 0;
    while (count < total) {
        cout << "Enter Marks: ";
        cin >> marks;
        sum += marks;
        count += 1;
    }

    cout << "The class Average is: " << sum/count << endl;
    return 0;
}