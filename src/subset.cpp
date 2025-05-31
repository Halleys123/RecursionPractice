#include "subset.h"
#include <vector>
#include <stdio.h>

using namespace std;

void subset(vector<int> &arr, vector<int> cur, int i = 0)
{
    if (i == arr.size())
    {
        for (int j = 0; j < cur.size(); j++)
        {
            printf("%d ", cur[j]);
        }
        printf("\n");
        return;
    }

    subset(arr, cur, i + 1);
    cur.push_back(arr[i]);
    subset(arr, cur, i + 1);
}
