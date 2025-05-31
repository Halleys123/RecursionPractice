#include "permutation.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void permutation(string str, string ans, int i)
{
    if (ans.length() == str.length())
    {
        cout << ans << " ";
        return;
        // return {ans};
    }
    for (int j = 0; j <= ans.length(); j++)
    {
        string n = ans.substr(0, j) + str[i] + ans.substr(j, ans.length());
        permutation(str, n, i + 1);
    }
    // return {""};
}
