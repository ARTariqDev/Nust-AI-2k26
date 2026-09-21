#include <iostream>

int main() {
    int firstNumber, secondNumber;
    std::cout << "Enter two integers (second must be non-zero): ";
    std::cin >> firstNumber >> secondNumber;

    std::cout << "Sum = " << firstNumber + secondNumber << "\n";
    std::cout << "Difference = " << firstNumber - secondNumber << "\n";
    std::cout << "Product = " << firstNumber * secondNumber << "\n";
    std::cout << "Integer quotient = " << firstNumber / secondNumber << "\n";
    std::cout << "Remainder = " << firstNumber % secondNumber << "\n";
    return 0;
}