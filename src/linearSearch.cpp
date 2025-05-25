#include "linearSearch.h"

int linearSearch(int *arr, int size, int target)
{
    if (size <= 0)
        return -1;
    if (arr[--size] == target)
        return size;
    return linearSearch(arr, size, target);
}
