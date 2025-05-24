#include "uppercaseLetterInString.h"

char uppercaseLetterInString(const char *string, int index)
{
    if (string[index] == '\0')
        return '-';
    if (string[index] >= 'A' && string[index] <= 'Z')
        return string[index];
    return uppercaseLetterInString(string, index + 1);
}

char uppercaseLetterInString(const char *string)
{
    return uppercaseLetterInString(string, 0);
}