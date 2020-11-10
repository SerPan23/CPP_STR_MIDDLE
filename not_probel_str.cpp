#include "strmiddle.h"
string not_probel_str(string str)
{
    string news;
    int kol = 0;
    int len = ft_len(str);
    for(int i = 0; i < len; i++)
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
        //cout << news << "|i: " << i << endl;
    }
    int l = ft_len(news);
    if(str[len-1] == ' ')
    {
        string otv;
        for(int i = 0; i < l; i++)
            otv += news[i];
        return otv;
    }
    return news;
}
