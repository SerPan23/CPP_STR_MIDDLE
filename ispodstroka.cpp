#include "strmiddle.h"
bool ispodstroka(string str1, string str2)
{
    bool f = false;
    int len1 = ft_len(str1)-1;
    int len2 = ft_len(str2)-1;
    for (int i = 0; i <= len2 - len1 && !f; i++) {
        f = true;
        for (int j = 0; j < len1 && f; j++)
        {
            if (str1[j] != str2[i + j])
                f = false;
        }
    }
    return f;
}
