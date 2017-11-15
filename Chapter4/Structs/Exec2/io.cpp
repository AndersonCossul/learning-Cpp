#include <iostream>
#include "structs.h"

Fraction readFraction()
{
    Fraction fraction;
    std::cout << "Enter fraction numerator: ";
    int numerator;
    std::cin >> numerator;

    int denominator;
    std::cout << "Enter fraction denominator: ";
    std::cin >> denominator;

    std::cout << std::endl;

    fraction = {numerator, denominator};
    return fraction;
}

void writeAnswer(float answer)
{
    std::cout << "The answer is " << answer << std::endl;
}
