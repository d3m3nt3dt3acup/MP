#include <iostream>

int main()
{
    double first_number, second_number;
    char choice;

    std::cout << "Welcome to the math menu!\n\n"
              << "Press (A) to add.\n"
              << "Press (S) to subtract.\n"
              << "Press (M) to multiply.\n"
              << "Press (D) to divide.\n"
              << "Press (Q) to quit.\n"
              << "Enter your choice: ";
    std::cin >> choice;
    choice = toupper(choice);

    if (choice == 'A')
    {
        std::cout << "Input the first number: ";
        std::cin >> first_number;
        std::cout << "Input the second number: ";
        std::cin >> second_number;
        std::cout << "The sum is " << first_number + second_number << ".";
    }
    else if (choice == 'S')
    {
        std::cout << "Input the first number: ";
        std::cin >> first_number;
        std::cout << "Input the second number: ";
        std::cin >> second_number;
        std::cout << "The difference is " << first_number - second_number << ".";
    }
    else if (choice == 'M')
    {
        std::cout << "Input the first number: ";
        std::cin >> first_number;
        std::cout << "Input the second number: ";
        std::cin >> second_number;
        std::cout << "The product is " << first_number * second_number << ".";
    }
    else if (choice == 'D')
    {
        std::cout << "Input the first number: ";
        std::cin >> first_number;
        std::cout << "Input the second number: ";
        std::cin >> second_number;
        std::cout << "The quotient is " << first_number / second_number << ".";
    }
    else if (choice == 'Q')
    {
        std::cout << "You have exited the math menu.";
        return 0;
    }
    else std::cout << "Invalid choice.";

    return 0;
}