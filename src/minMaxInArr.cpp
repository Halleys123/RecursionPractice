#include "minMaxInArr.h"

int minInArr(int *arr, int size)
{
    if (size == 1)
        return arr[0];
    int value = minInArr(arr, size - 1);

    return arr[size - 1] < value ? arr[size - 1] : value;
}
