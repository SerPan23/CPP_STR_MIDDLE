#include "strmiddle.h"
char simvol(string str)
{
    int kol = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        kol = 0;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
                kol++;
        }
        if(kol == 2)
            return str[i];
    }
}
