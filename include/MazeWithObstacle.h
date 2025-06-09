#pragma once

#include <vector>
#include <string>

using namespace std;

vector<string> MazeWithObstacle(int iX, int iY, int fX, int fY, string cur, vector<vector<bool>> &maze);
vector<string> FourDirectionMazeWithObstacle(int iX, int iY, int fX, int fY, string cur, vector<vector<bool>> &maze);