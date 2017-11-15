#include "constants.h"

double calculateHeight(int seconds, double initialHeight)
{
    double distanceFallen = (myConstants::gravity * (seconds * seconds)) / 2;
    return initialHeight - distanceFallen;
}
