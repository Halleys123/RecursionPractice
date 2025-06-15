#include "nQueen.h"
#include <stdio.h>
#include <vector>

using namespace std;

bool isValid(const vector<vector<bool>> &board, int row, int col, int size)
{
    for (int i = 0; i < row; ++i)
        if (!board[i][col])
            return false;

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        if (!board[i][j])
            return false;

    for (int i = row - 1, j = col + 1; i >= 0 && j < size; --i, ++j)
        if (!board[i][j])
            return false;

    return true;
}

bool isValidKnight(const vector<vector<bool>> &board, int row, int col, int size)
{
    if (row - 1 >= 0 && col - 2 >= 0 && !board[row - 1][col - 2])
        return false;
    if (row - 2 >= 0 && col - 1 >= 0 && !board[row - 2][col - 1])
        return false;
    if (row - 2 >= 0 && col - 1 >= 0 && !board[row - 2][col + 1])
        return false;
    if (row - 1 >= 0 && col - 2 >= 0 && !board[row - 1][col + 2])
        return false;
    return true;
}

vector<vector<vector<bool>>> ans = {};

void nQueen(vector<vector<bool>> &board, int size, int row)
{
    if (row == size)
    {
        ans.push_back(board);
        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                printf("%c ", board[i][j] ? '.' : 'Q');
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < size; i++)
    {
        if (isValidKnight(board, row, i, size))
        {
            board[row][i] = false;
            nQueen(board, size, row + 1);
            board[row][i] = true;
        }
    }
}
