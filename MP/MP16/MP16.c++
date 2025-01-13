#include <iostream>

int basic_math(double number);

int main()
{
    double number = 0;

    std::cout << "Welcome to Basic Math!\n"
              << "Enter a number: ";
    std::cin >> number;

    basic_math(number);

    return 0;
}

int basic_math(double number)
{
    char choice;

    std::cout << "\nPress 1 to add 5\n"
              << "Press 2 to subtract 5.\n"
              << "Press 3 to multiply by 5.\n"
              << "Press 4 to divide by 5.\n"
              << "Press x to exit the program.\n"
              << "\nEnter your choice: ";
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
            std::cout << "Multiply 5: " << number * 5;
            basic_math(number * 5);
            break;
        case '4':
            std::cout << "Divide 5: " << number / 5;
            basic_math(number / 5);
            break;
        case 'x':
            std::cout << "\nYou have exited the Basic Math program.\n";
            return 0;
            break;
        default:
            std::cout << "\nInvalid input.\n";
            basic_math(number);
    }

    return 0;
}