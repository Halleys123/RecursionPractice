#include <stdio.h>
#include "print_numbers.h"

void print_numbers_forward(int n, int max)
{

    if (n == 0)
        return;
    print_numbers_forward(n - 1, max);
    printf("%d ", n);
    if (n == max)
    {
        printf("\n");
    }
}

void print_numbers(int n)
{
    print_numbers_forward(n, n);
}

void print_numbers_reverse(int n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }
    printf("%d ", n);
    print_numbers_reverse(n - 1);
}