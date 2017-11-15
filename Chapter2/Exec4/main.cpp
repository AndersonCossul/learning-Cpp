#include "io.h"
#include "functions.h"

int main()
{
    double initialHeight = readInitalHeight();
    int seconds = 0;
    double height = calculateHeight(seconds, initialHeight);
    writeHeight(seconds, height);

    ++seconds;
    height = calculateHeight(seconds, initialHeight);
    writeHeight(seconds, height);

    ++seconds;
    height = calculateHeight(seconds, initialHeight);
    writeHeight(seconds, height);

    ++seconds;
    height = calculateHeight(seconds, initialHeight);
    writeHeight(seconds, height);

    ++seconds;
    height = calculateHeight(seconds, initialHeight);
    writeHeight(seconds, height);

    ++seconds;
    height = calculateHeight(seconds, initialHeight);
    writeHeight(seconds, height);

    return 0;
}
