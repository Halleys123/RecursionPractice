#include "selectionSort.h"

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int *arr, int size)
{
    // This was non recursive method
    // while(size != 0) {
    if (size == 0)
        return;
    int largest_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[largest_index] < arr[i])
            largest_index = i;
    }
    int temp = arr[size - 1];
    arr[size - 1] = arr[largest_index];
    arr[largest_index] = temp;
    selectionSort(arr, size - 1);
    // size -= 1;
    // }
}