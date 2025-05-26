#include <stdio.h>
#include "stars.h"

void stars(int star)
{
    if (star == 0)
        return;
    else
        printf("\n");
    for (int i = 0; i < star; i++)
    {
        printf("* ");
    }
    stars(star - 1);
}

void stars_rev(int max_star, int star)
{
    if (star == max_star)
        return;
    else
        printf("\n");
    for (int i = 0; i < star; i++)
    {
        printf("* ");
    }
    stars_rev(max_star, star + 1);
}