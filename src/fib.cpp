#include <memory.h>
#include <stdlib.h>
#include "fib.h"

int fib_rec(int nth_number)
{
    if (nth_number <= 1)
        return nth_number;
    return fib_rec(nth_number - 1) + fib_rec(nth_number - 2);
}

/**
 * @brief This function will be used internally to actually find the value
 * but won't be exposed to the main function.
 *
 * @param n - N'th value of the fibonacci that you want to find
 * @param memo -
 * @return int
 */
int fibonacci(int n, int *memo)
{
    if (n == 1 || n == 2)
    {
        memo[n] = 1;
        return memo[n];
    }

    if (memo[n])
        return memo[n];

    memo[n] = fibonacci(n - 2, memo) + fibonacci(n - 1, memo);
    return memo[n];
}

int fibonacci(int n)
{
    int *memo = (int *)malloc(sizeof(int) * (n + 1));
    memset(memo, 0, sizeof(int) * (n + 1));
    int ans = fibonacci(n, memo);
    free(memo);
    return ans;
}