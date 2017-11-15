#include <iostream>
#include "io.h"

int main()
{
    double num1 = readNumber();
    double num2 = readNumber();
    char op = readOperator();
    if (op == '+')
    {
        writeAnswer(num1, num2, op, num1 + num2);
    }
    else if (op == '-')
    {
        writeAnswer(num1, num2, op, num1 - num2);
    }
    else if (op == '*')
    {
        writeAnswer(num1, num2, op, num1 * num2);
    }
    else if (op == '/')
    {
        writeAnswer(num1, num2, op, num1 / num2);
    }
    return 0;
}
