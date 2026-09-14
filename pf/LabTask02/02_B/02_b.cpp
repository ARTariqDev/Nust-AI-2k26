#include <iostream>
#include <string>

int main() {
    std::string firstName; //multiple characters so a string
    int semesterNumber; //always an integer, never a decimal number so an int
    char section;// always a single character never multiple so a char
    double cgpa; // can be a decimal so a duble not an int

    std::cout << "Enter FirstName:\t";
    std::cin >> firstName;
    std::cout << "Enter Semester Number:\t";
    std::cin >> semesterNumber;
    std::cout << "Enter Section :\t";
    std::cin >> section;
    std::cout << "Enter Cgpa:\t";
    std::cin >> cgpa;

    std::cout << "\n----- CS110 STUDENT PROFILE -----\n";
    std::cout << "Name:\t" << firstName << "\n";
    std::cout << "Semester:\t" << semesterNumber << "\n";
    std::cout << "CGPA:\t" << cgpa << "\n";
    std::cout << "Section:\t" << section << "\n";
    std::cout << "Course:\tCS110\n";

    return 0;
}
