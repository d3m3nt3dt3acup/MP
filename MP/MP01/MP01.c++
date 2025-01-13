#include <iostream>

int main()
{
    double first, second;

    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << "Enter the second number: ";
    std::cin >> second;
    
    std::cout << "The sum of " << first << " and " << second << " is " << first + second << ".\n";

    return 0;
}
