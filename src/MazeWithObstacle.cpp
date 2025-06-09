#include "MazeWithObstacle.h"

#include <vector>
#include <string>

using namespace std;

vector<string> MazeWithObstacle(int iX, int iY, int fX, int fY, string cur, vector<vector<bool>> &maze)
{
    if (iX == fX && iY == fY)
    {
        return {cur};
    }
    vector<string> ans = {};
    if (iX < fX && maze[iX + 1][iY])
    {
        vector<string> rightPaths = MazeWithObstacle(iX + 1, iY, fX, fY, cur + "X", maze);
        ans.insert(ans.end(), rightPaths.begin(), rightPaths.end());
    }
    if (iY < fY && maze[iX][iY + 1])
    {
        vector<string> downPaths = MazeWithObstacle(iX, iY + 1, fX, fY, cur + "Y", maze);
        ans.insert(ans.end(), downPaths.begin(), downPaths.end());
    }
    // if (iY < fY && iX < fY)
    // {
    //     vector<string> diagonalPaths = MazeWithObstacle(iX + 1, iY + 1, fX, fY, cur + "D");
    //     ans.insert(ans.end(), diagonalPaths.begin(), diagonalPaths.end());
    // }
    return ans;
}
