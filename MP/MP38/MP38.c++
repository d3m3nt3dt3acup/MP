#include <iostream>

int main()
{
    int side = 5;

    for (int i = 1; i <= side; i++)
    {
        if(i == 1 || i == side)
        {
            for (int j = 1; j <= side; j++)
            {
                std::cout << "* ";
            }
            std::cout << '\n';
        }
        else
        {
            std::cout << "*";
            for (int k = 1; k <= (side * 2) - 3; k++) std::cout << " ";
            std::cout << "*\n";
        }
    }
    
    return 0;
}