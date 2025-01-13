#include <iostream>

int main()
{
    double prelim, midterm, final;

    std::cout << "Enter your prelim exam score: ";
    std::cin >> prelim;
    std::cout << "Enter your midterm exam score: ";
    std::cin >> midterm;
    std::cout << "Enter your final exam score: ";
    std::cin >> final;

    double average = (prelim + midterm + final) / 3;
    std::cout << "Your average score is " << average << ".\n";

    if (average >= 91 && average <= 100) std::cout << "Your grade is excellent.";
    else if (average >= 86 && average <= 90) std::cout << "Your grade is very good.";
    else if (average >= 81 && average <= 85) std::cout << "Your grade is good.";
    else if (average >= 76 && average <= 80) std::cout << "Your grade is fair.";
    else if (average == 75) std::cout << "Your grade is passable.";
    else if (average <= 74) std::cout << "Your grade needs improvement.";
    else std::cout << "Your grade is invalid.";

    return 0;
}