#include "permutation.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;
vector<string> permutation(string str, string ans, int i)
{
    if (ans.length() == str.length())
    {
        // cout << ans << " ";
        return {ans};
    }

    vector<string> result;
    for (int j = 0; j <= ans.length(); j++)
    {
        string n = ans.substr(0, j) + str[i] + ans.substr(j, ans.length());
        vector<string> temp = permutation(str, n, i + 1);
        result.insert(result.end(), temp.begin(), temp.end());
    }
    return result;
}
