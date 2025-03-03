#include <iostream>

int main()
{
    int array[] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
    int sum = 0;

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        sum += array[i];
    }

    std::cout << "The sum is " << sum << '\n';

    return 0;
}