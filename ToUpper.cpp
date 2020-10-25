#include "strmiddle.h"
unsigned char ToUpper(unsigned char c)
{
    if (c >= 'A' && c <= 'Z')
        return c;
    return 'a'-'b';
}
