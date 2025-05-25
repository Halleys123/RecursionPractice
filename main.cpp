#include <iostream>
#include <memory.h>

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

    // ? Factorial
    // printf("%d", fact(5));

    // ? Print Numbers
    // print_numbers(5);
    // print_numbers_reverse(5);

    delete arr;
    return 0;
}