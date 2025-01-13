#include <iostream>

int main()
{
    double first, second, third, fourth, fifth;

    std::cout << "Enter the first number: ";
    std::cin >> first;
    std::cout << "Enter the second number: ";
    std::cin >> second;
    std::cout << "Enter the third number: ";
    std::cin >> third;
    std::cout << "Enter the fourth number: ";
    std::cin >> fourth;
    std::cout << "Enter the fifth number: ";
    std::cin >> fifth;

    double sum = first + second;
    double diff = sum - third;
    double prod = diff * fourth;
    double quot = prod / fifth;

    std::cout << "Sum: " << sum << '\n'
              << "Difference: " << diff << '\n'
              << "Product: " << prod << '\n'
              << "Quotient: " << quot <<'\n';

    return 0;
}