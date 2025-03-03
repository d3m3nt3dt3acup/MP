#include <iostream>
#include <iomanip>

int main()
{
    int size = 10;
    int n[size] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};

    std::cout << "Element    Value    Histogram\n";
    for (int a = 0; a < size; a++)
    {
        if ((n[a] - 10) < 0)
        {
            std::cout << "      " << a << "        " << n[a] << "    ";
        }
        else
        {
            std::cout << "      " << a << "       " << n[a] << "    ";
        }

        for (int b = 0; b < n[a]; b++)
        {
            std::cout << '*';
        }
        
        std::cout << '\n';
    }

    return 0;
}