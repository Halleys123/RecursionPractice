#include <stdio.h>
#include <stdlib.h>

void solve()
{
    int ans;
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    if (n == 0)
    {
        ans = a;
    }
    else if (n == 1)
    {
        ans = b;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            int c = a ^ b;
            a = b;
            b = c;
        }
        ans = b;
    }
    printf("%d\n", ans);
}

// int main(void)
// {
//     int cases;
//     scanf("%d", &cases);
//     for (int currentCase = 0; currentCase < cases; currentCase++)
//     {
//         solve();
//     }
//     return 0;
// }
