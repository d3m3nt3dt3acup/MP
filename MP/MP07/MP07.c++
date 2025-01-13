#include <iostream>

int main()
{
    double C;

    std::cout << "Enter the temperature in celsius: ";
    std::cin >> C;

    double F = (C * 9.0 / 5) + 32;
    std::cout.precision(4);
    std::cout << "The temperature in fahrenheit is " << F << ".\n";

    return 0;
}