#include <string>
#include "skipLetter.h"

std::string skipLetter(std::string s, int i, char c)
{
    if (i == 0)
        return s[i] == c ? "" : std::string(1, s[i]);

    return skipLetter(s, i - 1, c) + (s[i] == c ? "" : std::string(1, s[i]));
}
