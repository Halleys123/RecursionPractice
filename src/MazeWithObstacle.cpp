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

/**
 * @brief This was just a test function for going in all four directions
 *
 * @param iX
 * @param iY
 * @param fX
 * @param fY
 * @param cur
 * @param maze
 * @return vector<string>
 */
vector<string> FourDirectionMazeWithObstacle(int iX, int iY, int fX, int fY, string cur, vector<vector<bool>> &maze)
{
    if (iX == fX && iY == fY)
    {
        return {cur};
    }
    vector<string> ans = {};
    if (iY < fY && maze[iX][iY + 1])
    {
        maze[iX][iY + 1] = false;
        vector<string> downPaths = FourDirectionMazeWithObstacle(iX, iY + 1, fX, fY, cur + "D", maze);
        maze[iX][iY + 1] = true;
        ans.insert(ans.end(), downPaths.begin(), downPaths.end());
    }
    if (iX < fX && maze[iX + 1][iY])
    {
        maze[iX + 1][iY] = false;
        vector<string> rightPaths = FourDirectionMazeWithObstacle(iX + 1, iY, fX, fY, cur + "R", maze);
        maze[iX + 1][iY] = true;
        ans.insert(ans.end(), rightPaths.begin(), rightPaths.end());
    }

    if (iY > 0 && maze[iX][iY - 1])
    {
        maze[iX][iY - 1] = false;
        vector<string> upPaths = FourDirectionMazeWithObstacle(iX, iY - 1, fX, fY, cur + "U", maze);
        maze[iX][iY - 1] = true;
        ans.insert(ans.end(), upPaths.begin(), upPaths.end());
    }

    if (iX > 0 && maze[iX - 1][iY])
    {
        maze[iX - 1][iY] = false;
        vector<string> leftPaths = FourDirectionMazeWithObstacle(iX - 1, iY, fX, fY, cur + "L", maze);
        maze[iX - 1][iY] = true;
        ans.insert(ans.end(), leftPaths.begin(), leftPaths.end());
    }

    return ans;
}
