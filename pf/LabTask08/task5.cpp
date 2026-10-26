#include <iostream>

using namespace std;

double calculateAverage(double m1, double m2, double m3);
char determineGrade(double average);
bool isPassing(double average);
void displayReport(double average, char grade, bool passed);

int main() {
    double M1,M2,M3;
    cout<< "Enter First Students Marks: ";
    cin >> M1;
    cout<< "Enter second Students Marks: ";
    cin >> M2;
    cout<< "Enter third Students Marks: ";
    cin >> M3;
    double avg = calculateAverage(M1,M2,M3);
    char grade = determineGrade(avg);
    bool pass = isPassing(avg);
    displayReport(avg,grade,pass);
    
    return 0;
}

// calculates average of all 3 marks
double calculateAverage(double m1, double m2, double m3) {

    return ((m1+m2+m3)/3);
}

// determines grade
char determineGrade(double average) {
    return (average >= 80 ? 'A' : (average >= 70 ? 'B' : (average >= 60 ? 'C' : (average >= 50 ? 'D' : 'F')))); 
}

bool isPassing(double average) { return (average >= 50 ? 1: 0); }

// displays average, grade and pass status when passed by value
void displayReport(double average, char grade, bool passed) {
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade <<endl;
    cout << "Passed (yes/no): " << (passed ? "Yes" : "No") << endl;
}


