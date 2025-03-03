#include <iostream>

int main()
{
    char string1[20];
    char string2[] = "string literal";
    int i;

    std::cout << "Enter a string: ";
    std::cin >> string1;

    std::cout << "string1 is: " << string1 << '\n'
              << "string2 is: " << string2 << '\n'
              << "string1 with spaces between characters is:\n";

    for (i = 0; string1[i] != '\0'; i++)
    {
        std::cout << string1[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}