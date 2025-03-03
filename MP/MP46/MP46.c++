#include <iostream>
#define SIZE 10

int main()
{
    int s[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    std::cout << "Element       Value\n";
    for (int i = 0; i < SIZE; i++)
    {
        if (i >= 4)
        {
            std::cout << "      " << i << "          " << s[i] << '\n';
        }
        else
        {
            std::cout << "      " << i << "           " << s[i] << '\n';
        }
    }

    return 0;
}