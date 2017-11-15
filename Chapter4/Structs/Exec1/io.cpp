#include <iostream>
#include "structs.h"

int readNumOfAds()
{
    std::cout << "Enter number of ads: ";
    int numOfAds;
    std::cin >> numOfAds;
    return numOfAds;
}

float readClickedPercentage()
{
    std::cout << "Enter percentage of ads that were clicked on by users: ";
    float percentage;
    std::cin >> percentage;
    return percentage;
}

double readAverageByAd()
{
    std::cout << "Enter average from each ad that was clicked: ";
    double average;
    std::cin >> average;
    return average;
}

void writeValues(Advertising advertising)
{
    std::cout << std::endl;
    std::cout << "Number of ads:                                    " << advertising.numberOfAds << std::endl;
    std::cout << "percentage of ads that were clicked on by users:  " << advertising.percentageClicked << std::endl;
    std::cout << "Enter average from each ad that was clicked:      " << advertising.averageByAd << std::endl;

    double totalMadeOnDay = advertising.numberOfAds * advertising.percentageClicked * advertising.averageByAd;

    std::cout << "Total made on the day:                            R$ " << totalMadeOnDay << std::endl;
}
