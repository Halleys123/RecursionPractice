#include <stdio.h>
#include "triangularSum.h"

int triangularSum(int arr[], int size)
{
    if (size == 0)
        return arr[0];
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i] + arr[i + 1];

    return triangularSum(arr, size - 1);
}
