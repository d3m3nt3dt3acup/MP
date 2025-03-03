#include <iostream>

int main()
{
    int integers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < sizeof(integers) / sizeof(integers[0]); i++)
    {
        sum += integers[i];
    }

    std::cout << "The sum is " << sum << '\n';

    return 0;
}