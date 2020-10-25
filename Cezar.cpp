#include "strmiddle.h"
string Cezar(string str, int k)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        //cout << "---" << str[i] << " " << int(str[i]) << "---" << endl;
        if((str[i] >= 65 && str[i] <= 90)||(str[i] >= 97 && str[i] <= 122))
        {
            if(str[i]-k < 65)
            {
                int tmp = str[i] - 65;
                //cout << str[i] << " " << char(90-(k-tmp)) << " " << tmp << endl;
                str[i] = 90-(k-tmp);
            }
            else if(str[i] > 90 && str[i]-k < 97)
            {

                int tmp = str[i] - 97;
                //cout << str[i] << " " << char(90-(k-tmp)) << " " << tmp << endl;
                str[i] = 122-(k-tmp);
            }
            else
                //cout << str[i] << " " << char(str[i] - k) << " " << k << endl;
                str[i] = str[i] - k;
        }
    }
    return str;
}
