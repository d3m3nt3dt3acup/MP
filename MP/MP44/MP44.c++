#include <iostream>
#include <string>

int main()
{
    int array_size = 4;
    int scores[array_size] = {20, 15, 12, 47};
    std::string title[array_size] = {"Mid1", "Mid2", "Final", "Total"};
    
    for (int i = 0; i < array_size; i++)
    {
        std::cout << title[i] << ' ' << scores[i] << '\n';
    }

    return 0;
}