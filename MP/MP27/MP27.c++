#include <iostream>

int main()
{
    double input, sum;
    int count = 10;

    for (int i = 0; i < count; i++)
    {
        std::cin >> input;
        sum += input;
    }

    std::cout << "Sum: " << sum << '\n';

    return 0;
}