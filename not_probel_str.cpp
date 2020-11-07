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
            i += kol;
            news += " ";
            news += str[i];
            kol = 0;
            //cout << str[i] << endl;
        }
        else
        {
            //cout << str[i] << endl;
            news += str[i];
        }
    }
    return news;
}
