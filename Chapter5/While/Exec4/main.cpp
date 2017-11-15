/*
*   This should print
*            1
*          2 1
*        3 2 1
*      4 3 2 1
*    5 4 3 2 1
*   to the console
*/

#include <iostream>

int main()
{
    int outer = 1;
    while (outer <= 5)
    {
        int inner = 5;
        while (inner >= 1)
        {
            if (inner > outer)
                std::cout << "  ";
            else
                std::cout << inner << " ";
            --inner;
        }
        std::cout << std::endl;
        ++outer;
    }
    return 0;
}
