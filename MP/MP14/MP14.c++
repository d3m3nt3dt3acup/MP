#include <iostream>
#include <string>

int main()
{
    std::string input_password, stored_password = "correct password";

    std::cout << "Enter the password: ";
    std::getline(std::cin, input_password);

    if (stored_password == input_password) std::cout << "Login success.\n";
    else std::cout << "Login failed.\n";

    return 0;
}