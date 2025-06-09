#include "CountMaze.h"

int CountMaze(int iX, int iY, int fX, int fY)
{
    int left = 0, right = 0;
    if (iX < fX)
    {
        left = CountMaze(iX + 1, iY, fX, fY);
    }
    if (iY < fY)
    {
        right = CountMaze(iX, iY + 1, fX, fY);
    }
    if (left == right && left == 0)
        return 1;
    return left + right;
}
