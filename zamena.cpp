#include "strmiddle.h"
string zamena(string str)
{
    string news;
    int ch = 0, pos = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            for(int j = i; (str[j] >= '0' && str[j] <= '9'); j++)
            {
                //cout << str[j] << " " << int(str[j])-48 << " ";
                ch *= 10;
                ch += str[j]-48;
                pos++;
            }
            string nn = ft_rev_covert_new(ch, 2);
            //cout << ch << " " << nn << endl;
            news += nn;
            ch = 0;
            nn = "";
            i += pos-1;
            pos = 0;
        }
        else
            news += str[i];
        //cout << news << endl;
    }
    return news;
}
