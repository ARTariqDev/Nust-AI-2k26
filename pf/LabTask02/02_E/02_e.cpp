#include <iostream>


int main () {
    double FirstNumber, SecondNumber; //declaring before hand to make it more concise later
    std::cout << "Enter the First Number: ";
    std::cin >> FirstNumber;
    std::cout << "Enter the Second Number: ";
    std::cin >> SecondNumber;

    // using math symbols and directly outputting the result of each calculation instead of storing it in a variable
    std::cout << FirstNumber << " + " << SecondNumber << " = " << FirstNumber + SecondNumber << "\n";
    std::cout << FirstNumber << " - " << SecondNumber << " = "<< FirstNumber - SecondNumber << "\n";
    std::cout << FirstNumber << " x " << SecondNumber << " = " << FirstNumber * SecondNumber << "\n";

    std::cout << FirstNumber << " ÷ " << SecondNumber << " = " << FirstNumber / SecondNumber << "\n";
    return 0;
}