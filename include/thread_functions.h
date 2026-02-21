#ifndef THREAD_FUNCTIONS_H
#define THREAD_FUNCTIONS_H

#include <windows.h>

struct MinMaxData {
    int* array;
    int size;
    int minValue;
    int maxValue;
    int minIndex;
    int maxIndex;
};

struct AverageData {
    int* array;
    int size;
    double averageValue;
};

#endif // THREAD_FUNCTIONS_H