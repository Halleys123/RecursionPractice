#include <stdio.h>
#include "number_reversal.h"

int reverse_number(int n, int multiplier, int &max_multiplier)
{
    if (n < 0)
    {
        printf("\033[1;31mCan't handle negative numbers\033[0m\n");
        return n;
    }
    int remainder = n % 10;
    int quotient = n / 10;

    if (quotient == 0)
    {
        max_multiplier = multiplier;
        return remainder;
    }

    printf("%d %d %d\n", remainder, quotient, multiplier);

    return reverse_number(quotient, multiplier * 10, max_multiplier) + (remainder * max_multiplier / multiplier);
}
// 1 2 3
// 3 2 1

// 123 % 10 = 3 = remainder
// 123 / 10 = 12 = quotient