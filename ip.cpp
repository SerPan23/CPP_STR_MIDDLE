#include "strmiddle.h"
bool ip(string str)
{
    int kolt = 0;
    string num;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '.')
        {
            int n = 0;
            for(int j = 0; j < ft_len(num)-1; j++)
                n += int(str[i]);
            if(n < 0 && n > 255)
                return false;
            num = "";
            kolt++;
        }
        num += str[i];
    }
    if(kolt != 3)
        return false;
    return true;
}
