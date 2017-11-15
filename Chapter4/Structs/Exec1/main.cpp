#include "io.h"
#include "structs.h"

int main()
{
    int numOfAds = readNumOfAds();
    float percentage = readClickedPercentage();
    double average = readAverageByAd();

    Advertising advertising = {numOfAds, percentage, average};
    writeValues(advertising);
    return 0;
}
