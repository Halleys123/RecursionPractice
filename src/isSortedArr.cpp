#include "isSortedArr.h"

bool isSortedArr(int *arr, int index, int size)
{
    if (size <= 1 || index >= size - 1)
        return true;
    if (arr[index] > arr[index + 1])
        return false;
    return isSortedArr(arr, index + 1, size);
}
