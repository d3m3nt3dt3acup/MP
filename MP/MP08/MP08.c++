#include <iostream>

int main()
{
    double x, y;

    std::cout << "Enter the first value: ";
    std::cin >> x;

    std::cout << "Enter the second value: ";
    std::cin >> y;

    if (x > y) std::cout << "The first value is greater than the second.";
    else if (x < y) std::cout << "The second value is greater than the first.";
    else std::cout << "The first and second values are equal.";

    return 0;
}