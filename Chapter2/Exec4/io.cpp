#include <iostream>

double readInitalHeight()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

void writeHeight(int seconds, double height)
{
    if (height > 0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters" << std::endl;
    else
        std::cout << "At 0 seconds, the ball is on the ground" << std::endl;
}
