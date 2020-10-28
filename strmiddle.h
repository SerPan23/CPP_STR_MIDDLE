#ifndef STRMIDDLE_H_INCLUDED
#define STRMIDDLE_H_INCLUDED
#include <iostream>
#include <string>
//#include <sstream>
using namespace std;

int ft_len(string str);
int ft_bin_num(int a);

bool IsDigit(unsigned char c);
unsigned char ToUpper(unsigned char c);
unsigned char registr(unsigned char c);
bool Compare(string S1, string S2);
int kol_slov(string str);
string dlin_slovo(string str);
char simvol(string str);
bool str_bool(string str1, string str2);
string Cezar(string str, int k);
string not_probel_str(string str);
bool ip(string str);
string zamena(string str);
string ft_rev_covert_new(int ch, int system);

#endif // STRMIDDLE_H_INCLUDED
