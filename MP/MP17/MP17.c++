#include <iostream>

int main()
{
    double first_input, second_input;
    char choice;

    std::cout << "\nWelcome to the Math Menu!\n\n"
              << "Press (A) to add.\n"
              << "Press (S) to subtract.\n"
              << "Press (M) to multiply.\n"
              << "Press (D) to divide.\n"
              << "Press (Q) to quit/exit.\n"
              << "Enter your choice: ";
    std::cin >> choice;
    choice = toupper(choice);

    switch (choice)
    {
        case 'A':
            std::cout << "\nInput the first number: ";
            std::cin >> first_input;
            std::cout << "Input the second number: ";
            std::cin >> second_input;
            std::cout << "Add: " << first_input + second_input;
            break;
        case 'S':
            std::cout << "\nInput the first number: ";
            std::cin >> first_input;
            std::cout << "Input the second number: ";
            std::cin >> second_input;
            std::cout << "Subtract: " << first_input - second_input;
            break;
        case 'M':
            std::cout << "\nInput the first number: ";
            std::cin >> first_input;
            std::cout << "Input the second number: ";
            std::cin >> second_input;
            std::cout << "Multiply: " << first_input * second_input;
            break;
        case 'D':
            std::cout << "\nInput the first number: ";
            std::cin >> first_input;
            std::cout << "Input the second number: ";
            std::cin >> second_input;
            std::cout << "Divide: " << first_input / second_input;
            break;
        case 'Q':
            std::cout << "\nYou have exited the math menu.";
            break;
        default:
            std::cout << "\nInvalid choice.";
    }

    return 0;
}