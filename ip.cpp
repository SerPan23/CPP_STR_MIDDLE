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
            kolt++;
            for(int j = 0; j < ft_len(num); j++)
            {
                if(num[j] - 48 >= 0 && num[j] - 48 <= 9)
                {
                    n *= 10;
                    n += num[j] - 48;
                }
                else
                    return false;
            }
            if(n < 0|| n > 255)
                return false;
            num = "";
            continue;
        }
        num += str[i];
    }
    if(kolt != 3)
        return false;
    return true;
}
