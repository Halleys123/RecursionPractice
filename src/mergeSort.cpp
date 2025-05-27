#include "mergeSort.h"

void mergeSort(int *arr, int start, int end)
{
    if (start >= end)
        return;

    int middle = start + (end - start) / 2;
    mergeSort(arr, start, end + 1 - middle);
    mergeSort(arr, start + middle, end);
}
