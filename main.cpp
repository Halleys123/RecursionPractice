#include <iostream>
#include <memory.h>
#include <vector>
#include <string>

#include <cstdlib>
#include <ctime>

#include "print_line.h"
#include "sumOfDigits.h"
#include "fib.h"
#include "shortest_grid_path.h"
#include "fact.h"
#include "print_numbers.h"
#include "number_reversal.h"
#include "binary_search.h"
#include "triangularSum.h"
#include "minMaxInArr.h"
#include "uppercaseLetterInString.h"
#include "stringReverse.h"
#include "countZeros.h"
#include "isSortedArr.h"
#include "linearSearch.h"
#include "findAllIndexInArr.h"
#include "stars.h"
#include "bubbleSortRec.h"
#include "selectionSort.h"
#include "skipLetter.h"
#include "subset.h"
#include "subsetIterative.h"
#include "permutation.h"
#include "diceThrowTarget.h"
#include "CountMaze.h"
#include "GiveMazePaths.h"
#include "MazeWithObstacle.h"
#include "nQueen.h"
#include "sudoku.h"
int main()
{
    printf("\n\033[1;32mMain function started\033[0m\n");
    // grey and yellow background
    printf("\033[1;30;43mOutput of the program will be from the following line\033[0m\n\n");
    // const int size = 30;
    // printf("%d", fibonacci(size));
    print_line();

    int num = 6;
    printf("Fibonacci %dth: %d", num, fib_rec(num));

    print_line();

    // ? Reverse a Number
    int max_multiplier = 0;
    printf("Reversed Number: %d\n", reverse_number(12345, 1, max_multiplier));
    printf("Reversed Number: %d\n", reverse_number(-12345, 1, max_multiplier));

    print_line();

    int arr_size = 20;
    int *arr = new int[arr_size];

    for (int i = 0; i < arr_size; ++i)
    {
        arr[i] = 2 * i;
    }

    for (int i = 0; i < arr_size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int number_to_find = 32;

    printf("Found number %d at index: %d", number_to_find, bsearch(arr, 0, arr_size, number_to_find));
    print_line();

    int triArr[] = {1, 2, 3, 4, 5};
    printf("Triangular Sum: %d", triangularSum(triArr, 5));

    print_line();
    int ans = minInArr(triArr, 5);
    printf("Minimum value in arr is: %d", ans);
    print_line();
    const char *string = "thisisNotstring\0";
    printf("Upper case letter = %c\n", uppercaseLetterInString(string));
    print_line();
    printf("Reversed String: %s\n", stringReverse(string));
    print_line();

    printf("Sum of digits: %d", sumOfDigits(1234));

    print_line();

    printf("Zeros in given Number are: %d", countZeros(100101024));
    print_line();

    printf("Is sorted Array: %d\n", isSortedArr(arr, 0, arr_size));
    printf("Is sorted Array: %d\n", isSortedArr(triArr, 0, 5));

    print_line();
    printf("Finding 7 in array: %d", linearSearch(arr, arr_size, 7));
    print_line();

    int *tempArr = new int[6];
    tempArr[0] = 1;
    tempArr[1] = 2;
    tempArr[2] = 2;
    tempArr[3] = 1;
    tempArr[4] = 2;
    tempArr[5] = 5;
    int ansSize = 0;

    int *ansarr = findAllIndexInArr(tempArr, 6, 2, &ansSize);
    for (int i = 0; i < ansSize; i++)
    {
        printf("%d ", ansarr[i]);
    }
    printf("\n");
    print_line();
    stars(5);
    stars_rev(5);
    print_line();
    int *barr = new int[5];
    barr[0] = 5;
    barr[1] = 4;
    barr[2] = 3;
    barr[3] = 2;
    barr[4] = 1;

    selectionSort(barr, 5);
    // bubbleSortRec(barr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", barr[i]);
    }
    print_line();

    std::string s = "bcacbad";
    printf("%s\n", skipLetter(s, s.length() - 1, 'a').c_str());

    print_line();

    vector<int> sub = {1, 2, 3, 4, 5, 6};
    vector<int> cur;

    vector<vector<int>> ansVec = subsetIterative(sub);

    printf("[");
    for (vector<int> i : ansVec)
    {
        printf("[");
        for (auto j : i)
        {
            printf("%d ", j);
        }
        printf("],");
    }
    printf("]");
    print_line();

    std::vector<std::string> ve = permutation("abc", "", 0);
    for (std::string i : ve)
    {
        printf("%s ", i.c_str());
    }

    print_line();
    vector<int> curSum;
    printf("[");
    for (auto i : diceThrowTarget(4, 0, curSum))
    {
        printf("[");
        for (auto j : i)
        {
            printf("%d ", j);
        }
        printf("] ");
    }
    printf("]");

    print_line();
    printf("Total Number of ways: %d", CountMaze(0, 0, 2, 2));
    print_line();
    std::string paths;
    for (auto i : GiveMazePaths(0, 0, 2, 2, paths))
    {
        printf("%s ", i.c_str());
    }

    printf("\n");
    print_line();
    paths = "";
    vector<vector<bool>> maze = {
        {false, true, true, true, true},
        {true, true, true, true, false},
        {true, false, true, true, true},
        {false, true, true, false, true},
        {true, false, true, true, true},
    };
    int mazeX = 5, mazeY = 5;
    paths = "";
    for (auto i : FourDirectionMazeWithObstacle(0, 0, mazeX - 1, mazeY - 1, paths, maze))
    {
        printf("%s\n", i.c_str());
        // pathPrinter(i, mazeX, mazeY);
    }

    print_line();
    int boardSize = 5;
    vector<vector<bool>> board(boardSize, vector<bool>(boardSize, true));
    nQueen(board, boardSize, 0);
    delete arr;

    print_line();
    vector<vector<int>> sudoku = {
        {5, 3, -1, -1, 7, -1, -1, -1, -1},
        {6, -1, -1, 1, 9, 5, -1, -1, -1},
        {-1, 9, 8, -1, -1, -1, -1, 6, -1},
        {8, -1, -1, -1, 6, -1, -1, -1, 3},
        {4, -1, -1, 8, -1, 3, -1, -1, 1},
        {7, -1, -1, -1, 2, -1, -1, -1, 6},
        {-1, 6, -1, -1, -1, -1, 2, 8, -1},
        {-1, -1, -1, 4, 1, 9, -1, -1, 5},
        {-1, -1, -1, -1, 8, -1, -1, 7, 9}};
    sudokuSolver(sudoku, 0, 0);

    return 0;
}