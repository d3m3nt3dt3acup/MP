#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++) std::cout << i;
        std::cout << '\n';
    }

    return 0;
}