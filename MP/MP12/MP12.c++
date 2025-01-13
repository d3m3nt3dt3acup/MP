#include <iostream>

int main()
{
    char letter;

    std::cout << "Enter a letter: ";
    std::cin >> letter;

    letter = toupper(letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') std::cout << "The letter " << letter << " is a vowel.\n";
    else std::cout << "The letter " << letter << " is a consonant.\n";

    return 0;
}