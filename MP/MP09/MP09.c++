#include <iostream>

int main()
{
    double num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0) std::cout << "The number is positive.";
    else if (num < 0) std::cout << "The number is negative.";
    else std::cout << "The number is neither positive nor negative.";

    return 0;
}