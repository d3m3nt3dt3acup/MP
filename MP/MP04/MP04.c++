#include <iostream>

int main()
{
    std::string last_name, first_name, middle_name, address, year_level, course;
    int age;

    std::cout << "Welcome to the Student Profile Mini Chatbot!\n"
              << "Please enter your first name: ";
    std::cin >> first_name;

    std::cout << "Hello there, " << first_name << "!\n"
              << "Please provide the following details of your profile.\n";
    
    std::cout << "What is your surname? ";
    std::cin >> last_name;

    std::cout << "What is your middle name? ";
    std::cin >> middle_name;

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "What is your address? ";
    std::cin >> address;

    std::cout << "What is your year level? ";
    std::cin >> year_level;

    std::cout << "What is your course? ";
    std::cin >> course;

    std::cout << "Thank you, " << first_name << ". Below are the details you have provided:\n"
              << "You are " << first_name << " " << middle_name << " " << last_name << ".\n"
              << "You are " << age << " years old.\n" 
              << "You are from " << address << ".\n"
              << "You are in your " << year_level << " year level taking up " << course << ".\n"
              << "Thank you, " << first_name << "!";

    return 0;
}