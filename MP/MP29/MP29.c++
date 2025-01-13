#include <iostream>

int main()
{
    int product = 1, initial = 1, final = 5;

    for (int i = initial; i <= final; i++) product *= i;

    std::cout << product;

    return 0;
}