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
                ch += int(str[j])-48;
                pos++;
            }
            int d = ft_bin_num(ch);
            stringstream ss;
            ss << d;
            string nn = ss.str();
            //cout << ch << " " << d << " " << nn << endl;
            news += nn;
            i += pos;
        }
        else
            news += str[i];
        //cout << news << endl;
    }
    return news;
}
