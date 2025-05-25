#include "countZeros.h"

int countZeros(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 == 0) + countZeros(n / 10);

    // ? Obselete
    // if (n % 10 == 0)
    //     return 1 + countZeros(n / 10);
    // else
    //     return countZeros(n / 10);
}
