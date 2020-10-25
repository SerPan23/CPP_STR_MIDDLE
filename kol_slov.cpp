#include "strmiddle.h"
int kol_slov(string str)
{
    int kol = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            kol++;
    }
    return kol;
}
