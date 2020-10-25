#include "strmiddle.h"
string not_probel_str(string str)
{
    string news;
    int kol = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            for(int j = i; str[j] == ' '; j++)
                kol++;
        }
        news += str[i];
        i += kol;
        kol = 0;
    }
    return news;
}
