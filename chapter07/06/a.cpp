/******************************************************************
#
#                    Filename: a.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 14:30:36
#
******************************************************************/
#include "../../head.hpp"

string abc(string& str)
{
    string sss(str);
    return sss;
}

int main(
{
    string s = "hello world";

    string p = abc(s);

    cout << p;
}
