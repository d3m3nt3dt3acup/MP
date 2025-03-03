#include <iostream>

int main()
{
    int array_size = 5;
    int integers[array_size];

    std::cout << "Enter 5 numbers:\n";
    for (int i = 0; i < array_size; i++)
    {
        std::cin >> integers[i];
    }

    std::cout << "The numbers are: ";
    for (int j = 0; j < array_size; j++)
    {
        std::cout << integers[j] << ' ';
    }
    
    return 0;
}