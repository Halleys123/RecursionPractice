#include "mergeSort.h"

void mergeSort(int *arr, int start, int end)
{
    // 3 / 2 = 1
    // 4 / 2 = 2
    int middle = (end - start + 1) / 2;
    mergeSort(arr, start, end - middle); // 0 1
    mergeSort(arr, start + middle + 1, end);
}
