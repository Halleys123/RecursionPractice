#include <vector>
#include "diceThrowTarget.h"

using namespace std;

vector<vector<int>> diceThrowTarget(int target, int curSum, vector<int> arrCur)
{
    if (curSum == target)
    {
        return {arrCur};
    }
    vector<vector<int>> finalAns;
    for (int i = 1; i <= target - curSum; i++)
    {
        arrCur.push_back(i);
        vector<vector<int>> temp = diceThrowTarget(target, curSum + i, arrCur);
        finalAns.insert(finalAns.end(), temp.begin(), temp.end());
        arrCur.pop_back();
    }
    return finalAns;
}
