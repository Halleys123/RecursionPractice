#include "binary_search.h"

int bsearch(int *arr, int start, int end, int number_to_find)
{
    if (start > end)
    {
        return -1;
    }
    int middle = start + (end - start) / 2;
    if (arr[middle] == number_to_find)
    {
        return middle;
    }
    else if (arr[middle] > number_to_find)
    {
        return bsearch(arr, start, middle - 1, number_to_find);
    }
    else
    {
        return bsearch(arr, middle + 1, end, number_to_find);
    }
}