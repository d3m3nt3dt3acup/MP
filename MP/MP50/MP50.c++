#include <iostream>
#include <cmath>

int main()
{
    int array_size = pow(2, 15);
    int array[array_size];
    int swap;

    for (int i = 0; i < array_size; i++)
    {
        array[i] = rand() % array_size;
    }
    
    for (int j = 0; j < array_size - 1; j++)
    {
        for (int k = 0; k < array_size - 1; k++)
        {
            if (array[k + 1] < array[k])
            {
                swap = array[k];
                array[k] = array[k + 1];
                array[k + 1] = swap;
            }
            
        }
    }

    for (int l = 0; l < array_size; l++)
    {
        std::cout << array[l] << ' ';
    }
    
    return 0;
}