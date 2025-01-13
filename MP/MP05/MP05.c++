#include <iostream>

int main()
{
    double F;

    std::cout << "Enter the temperature in fahrenheit: ";
    std::cin >> F;

    double C = (5.0 / 9) * (F - 32);
    std::cout.precision(4);
    std::cout << "The temperature in celsius is " << C << ".\n";

    return 0;
}