#include <iostream>

int main()
{
    int age;
    double meters;
    char initial;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your height in meters: ";
    std::cin >> meters;
    std::cout << "Enter your initial: ";
    std::cin >> initial;

    std::cout << "You are " << age << " year/s old, your height is " << meters << " meters, and your initial is " << initial << ".\n";

    return 0;
}