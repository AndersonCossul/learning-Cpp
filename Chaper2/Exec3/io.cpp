#include <iostream>

double readNumber()
{
    std::cout << "Enter first number: ";
    double num1;
    std::cin >> num1;
    return num1;
}

char readOperator()
{
    std::cout << "Enter one of the operations: + - * / :";
    char op;
    std::cin >> op;
    return op;
}

void writeAnswer(double num1, double num2, char op, double answer)
{
    std::cout << num1 << " " << op << " " << num2 << ": " << answer;
}
