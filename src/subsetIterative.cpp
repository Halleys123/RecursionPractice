#include "subsetIterative.h"
#include <vector>

using namespace std;

vector<vector<int>> subsetIterative(vector<int> &arr)
{
    vector<vector<int>> ans = {{}};
    for (int i = 0; i < arr.size(); i++)
    {
        int n = ans.size();
        for (int j = 0; j < n; j++)
        {
            vector<int> cur = ans[j];
            cur.push_back(arr[i]);
            ans.push_back(cur);
        }
    }

    return ans;
}
