#include "strmiddle.h"
string dlin_slovo(string str)
{
    int maxk = 0, kol = 0;
    string maxs, tmps;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            if(kol > maxk)
            {
                maxk = kol;
                maxs = tmps;
            }
            kol = 0;
            tmps = "";
        }
        else{
            kol++;
            tmps += str[i];
        }
    }
    if(kol > maxk)
    {
        maxk = kol;
        maxs = tmps;
    }
    return maxs;
}
