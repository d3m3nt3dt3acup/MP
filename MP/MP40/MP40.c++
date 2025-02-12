#include <iostream>

int main()
{
    int height = 5;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++) std::cout << "* ";
        std::cout << '\n';
    }

    for (int i = 1; i <= height - 1; i++)
    {
        for (int j = i; j <= height - 1; j++) std::cout << "* ";
        std::cout << '\n';
    }
    
    return 0;
}