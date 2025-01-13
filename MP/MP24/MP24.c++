#include <iostream>

int main()
{
    int i = 10;

    do
    {
        std::cout << i << '\n';
        i--;
    } while (i >= 1);
    
    return 0;
}