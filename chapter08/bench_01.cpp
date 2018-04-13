/******************************************************************
#
#                    Filename: bench_01.cpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-13 15:52:37
#
******************************************************************/
#include "template_total.hpp"

int main()
{
    string s;
    while(getline(cin, s))
        split(s, ostream_iterator<string>(cout, "\n"));
    return 0;
}
