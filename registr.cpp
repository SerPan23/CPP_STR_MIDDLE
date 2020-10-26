#include "strmiddle.h"
unsigned char registr(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        return c+32;
    else if (c >= 'a' && c <= 'z')
        return c-32;
    return c;
}
