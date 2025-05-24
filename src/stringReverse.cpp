#include "stringReverse.h"
#include <cstring>
#include <stdlib.h>

// Helper function for recursion using two pointers
void stringReverseHelper(const char *string, char *ans, int left, int right)
{
    if (left > right)
        return;
    ans[left] = string[right];
    ans[right] = string[left];
    stringReverseHelper(string, ans, left + 1, right - 1);
}

char *stringReverse(const char *string)
{
    int len = strlen(string);
    char *ans = (char *)malloc(sizeof(char) * (len + 1));
    if (!ans)
        return NULL;
    strcpy(ans, string);
    stringReverseHelper(string, ans, 0, len - 1);
    ans[len] = '\0';
    return ans;
}