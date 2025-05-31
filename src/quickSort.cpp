#include "quickSort.h"

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void quickSort(int *arr, int start, int end, int pivot)
{
    while (start < end)
    {
        if (arr[start] > arr[pivot] && arr[end] < arr[pivot])
        {
            swap(arr, start, end);
            start++;
            end--;
        }
    }
}
