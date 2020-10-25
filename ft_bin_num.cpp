#include <iostream>
#include "strmiddle.h"
using namespace std;

int ft_bin_num(int a)
{
    int otv = 0, k = 1;
    while(a){
        otv += (a%2) * k;
        k *= 10;
        a /= 2;
    }
    return otv;
}
