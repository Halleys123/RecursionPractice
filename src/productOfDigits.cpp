#include "productOfDigits.h"

int productOfDigits(int n)
{
    if (n % 10 == n)
        return n;
    return n % 10 * productOfDigits(n / 10);
}
