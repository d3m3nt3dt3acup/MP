#include <iostream>

int findMax(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The maximum element is " << findMax(arr, n);
    return 0;
}

int findMax(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if ((arr[i]) > max)
        {
            max = arr[i];
        }
    }

    return max;
}