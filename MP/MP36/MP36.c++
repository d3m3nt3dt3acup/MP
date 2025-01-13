#include <iostream>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 65; j <= 64 + i; j++) std::cout << (char) j;
        std::cout << '\n';
    }
    
    return 0;
}