#include "io.h"
#include "structs.h"

int main()
{
    Fraction fraction1 = readFraction();
    Fraction fraction2 = readFraction();
    float answer = static_cast<float>(fraction1.numerator * fraction2.numerator);
    answer /= fraction1.denominator * fraction2.denominator;
    writeAnswer(answer);
    return 0;
}
