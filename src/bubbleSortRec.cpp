#include "bubbleSortRec.h"

void bubbleSortRec(int *arr, int size, int cur)
{
    if (size == 1)
        return;
    if (cur < size - 1)
    {
        if (arr[cur] > arr[cur + 1])
        {
            int temp = arr[cur];
            arr[cur] = arr[cur + 1];
            arr[cur + 1] = temp;
        }
        bubbleSortRec(arr, size, cur + 1);
    }
    else
    {
        bubbleSortRec(arr, size - 1, 0);
    }
}
