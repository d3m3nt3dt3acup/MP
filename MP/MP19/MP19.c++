#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    double balance = 10000, deposit = 0, withdraw = 0;
    char choice;
    int exit = 0;

    std::cout << "Welcome to the ATM Banking System!\n";

    while (exit == 0)
    {
        std::cout << "\nPress I - for Balance Inquiry\n"
                  << "Press D - for Deposit\n"
                  << "Press W - for Withdrawals\n"
                  << "Press E - for Exiting the System\n"
                  << "Enter your choice: ";
        std::cin >> choice;
        choice = toupper(choice);

        switch (choice)
        {
            case 'I':
                std::cout << "\nYour balance is " << balance << " pesos.\n";
                break;
            case 'D':
                std::cout << "\nEnter the deposit amount: ";
                std::cin >> deposit;
                balance += deposit;
                std::cout << "\nThe updated balance is " << balance << " pesos.\n";
                break;
            case 'W':
                if (balance <= 0) std::cout << "\nYou cannot withdraw due to insufficient balance.\n";
                else
                {
                    std::cout << "\nEnter the withdraw amount: ";
                    std::cin >> withdraw;
                    balance -= withdraw;
                    std::cout << "\nThe updated balance is " << balance << " pesos.\n";
                }
                break;
            case 'E':
                std::cout << "\nYou have exited the ATM Banking System.\n";
                exit++;
                break;
            default:
                std::cout << "\nInvalid choice.\n";
        }
    }

    return 0;
}
