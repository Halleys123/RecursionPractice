#include "GiveMazePaths.h"

#include <vector>
#include <string>

using namespace std;

vector<string> GiveMazePaths(int iX, int iY, int fX, int fY, string cur)
{
    if (iX == fX && iY == fY)
    {
        return {cur};
    }
    vector<string> ans;
    if (iX < fX)
    {
        vector<string> leftPaths = GiveMazePaths(iX + 1, iY, fX, fY, cur + "R");
        ans.insert(ans.end(), leftPaths.begin(), leftPaths.end());
    }
    if (iY < fY)
    {
        vector<string> downPaths = GiveMazePaths(iX, iY + 1, fX, fY, cur + "D");
        ans.insert(ans.end(), downPaths.begin(), downPaths.end());
    }
    return ans;
}
