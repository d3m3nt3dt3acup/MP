#include <iostream>

int main()
{
    char alphabet = 'A';

    while (alphabet != 'Z' + 1)
    {
        std::cout << alphabet << '\n';
        alphabet++;
    }

    return 0;
}