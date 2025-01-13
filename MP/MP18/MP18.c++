#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::fixed << std::setprecision(2);
    double balance = 10000, deposit = 0, withdraw = 0;
    char choice;

    std::cout << "Welcome to the ATM Banking System!\n";

    while(true)
    {
        std::cout << "\nPress I - for Balance Inquiry\n"
                  << "Press D - for Deposit\n"
                  << "Press W - for Withdrawals\n"
                  << "Press E - for Exiting the System\n"
                  << "Enter your choice: ";
        std::cin >> choice;
        choice = toupper(choice);

        if (choice == 'I') std::cout << "\nYour balance is " << balance << '\n';
        else if (choice == 'D')
        {
            std::cout << "\nEnter the deposit amount: ";
            std::cin >> deposit;
            balance += deposit;
            std::cout << "\nThe updated balance is " << balance << " pesos.\n";
        }
        else if (choice == 'W')
        {
            if (balance <= 0) std::cout << "\nYou cannot withdraw due to insufficient balance.\n";
            else
            {
                std::cout << "\nEnter the withdraw amount: ";
                std::cin >> withdraw;
                balance -= withdraw;
                std::cout << "\nThe updated balance is " << balance << " pesos.\n";
            }
        }
        else if (choice == 'E')
        {
            std::cout << "You have exited the ATM Banking System.\n";
            break;
        }
        else std::cout << "Invalid choice.\n";
    }

    return 0;
}
