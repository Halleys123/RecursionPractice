#include <memory.h>
#include "findAllIndexInArr.h"

int helper(int *arr, int size, int target, int *ansArr, int i)
{
    if (size <= 0)
        return i;
    if (arr[--size] == target)
    {
        ansArr[i++] = size;
    }
    return helper(arr, size, target, ansArr, i);
}

int *findAllIndexInArr(int *arr, int size, int target, int *ansSize)
{
    int i = 0;
    int *ansArr = new int[size];
    memset(ansArr, -1, size * sizeof(int));
    *ansSize = helper(arr, size, target, ansArr, 0);
    return ansArr;
}
