#include "strmiddle.h"
string ft_rev_covert_new(int ch, int n)
{
    string str, otv;
    while(ch){
        if(ch%n > 9)
        {
            str += char(ch%n)+55;
        }
        else
            str += char(ch%n)+48;
        ch /= n;
    }
    for(int i = ft_len(str)-1; i >= 0; i--)
        otv += str[i];
    return otv;
}
