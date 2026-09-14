#include <iostream>

int main() {
    int first = 10, second = 20;
    double average = (first + second) / 2;
    int divisor;
    std::cout << "Enter a non-zero divisor: ";
    std::cin >> divisor;
    std::cout << "Average = " << average << "\n";
    std::cout << "10 / divisor = " << 10 / divisor << "\n";
    return 0;
}