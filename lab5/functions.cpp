#include "functions.h"

int len(const char *arr)
{
    int l = 0;
    while (arr[l] != '\0')
    {
        l++;
    }
    return l;
}

void strCopy(char *&dest, const char *src)
{
    if (src)
    {
        for (int i = 0; src[i] != '\0'; i++)
        {
            dest[i] = src[i];
        }
    }
}
