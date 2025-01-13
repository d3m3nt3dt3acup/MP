#include <iostream>

int main()
{
    int height = 100;

    for (int i = 1; i <= height; i++)
    {
        for(int k = i; k < height; k++) std::cout << " ";
        for(int j = 1; j <= i; j++) std::cout << "* ";
        std::cout << '\n';
    }

    return 0;
}