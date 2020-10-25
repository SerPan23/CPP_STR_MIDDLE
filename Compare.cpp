#include "strmiddle.h"
bool Compare(string S1, string S2)
{
    for(int i = 0; (S1[i] != '\0' || S2[i] != '\0'); i++)
    {
        if(S1[i] != S2[i])
            return false;
    }
    return true;
}
