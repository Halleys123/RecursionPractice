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
        vector<string> rightPaths = GiveMazePaths(iX + 1, iY, fX, fY, cur + "X");
        ans.insert(ans.end(), rightPaths.begin(), rightPaths.end());
    }
    if (iY < fY)
    {
        vector<string> downPaths = GiveMazePaths(iX, iY + 1, fX, fY, cur + "Y");
        ans.insert(ans.end(), downPaths.begin(), downPaths.end());
    }
    if (iY < fY && iX < fY)
    {
        vector<string> diagonalPaths = GiveMazePaths(iX + 1, iY + 1, fX, fY, cur + "D");
        ans.insert(ans.end(), diagonalPaths.begin(), diagonalPaths.end());
    }
    return ans;
}
