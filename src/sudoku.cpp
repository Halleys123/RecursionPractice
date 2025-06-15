#include "sudoku.h"
#include <vector>
#include <iostream>

using namespace std;
bool isSafe(const vector<vector<int>> &board, int row, int col, int num)
{
    int rowGroup = row / 3;
    int colGroup = col / 3;

    for (int i = 0; i < 9; i++)
    {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }

    for (int i = rowGroup * 3; i < rowGroup * 3 + 3; i++)
    {
        for (int j = colGroup * 3; j < colGroup * 3 + 3; j++)
        {
            if (board[i][j] == num)
                return false;
        }
    }

    return true;
}

void sudokuSolver(vector<vector<int>> &board, int row, int col)
{
    if (row == 9)
    {
        // Solution found, print the board
        for (const auto &r : board)
        {
            for (int num : r)
                cout << num << " ";
            cout << endl;
        }
        cout << endl;
        return;
    }

    if (col == 9)
    {
        sudokuSolver(board, row + 1, 0);
        return;
    }

    if (board[row][col] != 0)
    {
        sudokuSolver(board, row, col + 1);
        return;
    }

    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(board, row, col, num))
        {
            board[row][col] = num;
            sudokuSolver(board, row, col + 1);
            board[row][col] = 0;
        }
    }
}