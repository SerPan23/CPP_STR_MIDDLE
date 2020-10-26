#include "strmiddle.h"
unsigned char ToUpper(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        return c;
    else if (c >= 'a' && c <= 'z')
        return c-32;
    return c;
}
