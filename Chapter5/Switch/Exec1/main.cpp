#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: ";
    int number;
    std::cin >> number;
    return number;
}

char readOperation()
{
    std::cout << "Enter one of the operations: + - * / %: ";
    char op;
    std::cin >> op;
    return op;
}

int calculate(int num1, int num2, char op)
{
    switch (op)
    {
        case '+':
            return num1 + num2;
            // no need for break here because of return
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0)
            {
                std::cout << "ERROR: division by zero.";
                exit(-1);
            }
            return num1 / num2;
        case '%':
            return num1 % num2;
        default:
            std::cout << "ERROR: no valid operation was provided.";
            exit(-1);
    }
}

void printAnswer(int answer)
{
    std::cout << "The answer is " << answer << std::endl;
}

int main()
{
    int num1 = readNumber();
    int num2 = readNumber();
    char op = readOperation();
    int answer = calculate(num1, num2, op);
    printAnswer(answer);
    return 0;
}
