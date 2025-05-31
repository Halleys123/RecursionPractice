#include "subset.h"
#include <vector>
#include <stdio.h>

using namespace std;

vector<vector<int>> subset(vector<int> &arr, vector<int> cur, int i)
{
    if (i == arr.size())
        return {cur};

    vector<vector<int>> res = subset(arr, cur, i + 1);

    cur.push_back(arr[i]);
    vector<vector<int>> includeRes = subset(arr, cur, i + 1);

    res.insert(res.end(), includeRes.begin(), includeRes.end());
    return res;
}
