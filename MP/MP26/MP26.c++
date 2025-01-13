#include <iostream>

int main()
{
    double input, sum, average;
    int count = 10;

    for (int i = 0; i < count; i++)
    {
        std::cin >> input;
        sum += input;
    }
    
    average = sum / count;
    std::cout << "Sum: " << sum << '\n'
              << "Average: " << average << '\n';

    return 0;
}