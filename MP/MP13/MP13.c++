#include <iostream>

int basic_math(double number);

int main()
{
    double number = 0;

    std::cout << "Welcome to the Basic Math program!\n"
              << "Enter a number: ";
    std::cin >> number;

    basic_math(number);

    return 0;
}

int basic_math(double number)
{
    char choice = 0;
    double first_number = 0;
    double second_number = 0;

    std::cout << "\nPress 1 to add 5\n"
              << "Press 2 to subtract 5\n"
              << "Press 3 to multiply by 5\n"
              << "Press 4 to divide by 5\n"
              << "Press n to enter a new number\n"
              << "Press x to exit\n\n"
              << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
        case '1':
            std::cout << "Add 5: " << number + 5;
            basic_math(number + 5);
            break;
        case '2':
            std::cout << "Subtract 5: " << number - 5;
            basic_math(number - 5);
            break;
        case '3':
            std::cout << "Multiply by 5: " << number * 5;
            basic_math(number * 5);
            break;
        case '4':
            std::cout << "Divide by 5: " << number / 5;
            basic_math(number / 5);
            break;
        case 'n':
            std::cout << "Enter a new number: ";
            std::cin >> number;
            basic_math(number);
            break;
        case 'x':
            std::cout << "\nYou have exited the Basic Math program.\n";
            return 0;
        default:
            std::cout << "\nInvalid choice.\n";
            basic_math(number);
    }

    return 0;
}