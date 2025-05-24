#include "stdio.h"
#include "print_line.h"

void print_line(int len)
{
    printf("\n\033[1;33m");
    for (int i = 0; i < len; ++i)
    {
        putchar('-');
    }
    printf("\033[0m\n");
}