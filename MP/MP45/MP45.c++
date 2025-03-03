#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    std::cout << std::fixed << std::setprecision(1);
    int array_size = 4;
    std::string title[array_size] = {"Mid1", "Mid2", "Final", "Total"};
    int scores[array_size];
    int sum = 0;
    float percentage[array_size];
    
    for (int i = 0; i < array_size; i++)
    {
        if (i == array_size - 1)
        {
            scores[i] = sum;
        }
        else
        {
            std::cout << "Enter your score in " << title[i] << ": ";
            std::cin >> scores[i];
            sum += scores[i];
        }
    }

    for (int j = 0; j < array_size; j++)
    {
        percentage[j] = (scores[j] / (float) 60) * 100;
    }

    std::cout << '\n';

    for (int k = 0; k < array_size; k++)
    {
        std::cout << title[k] << ' ' << scores[k] << "   " << percentage[k] << "%" << '\n';
    }

    return 0;
}