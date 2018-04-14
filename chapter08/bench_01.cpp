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
    string s2;
	string s3;
    while(getline(cin, s)) {
        split(s, ostream_iterator<string>(cout, "\n"));
        my_copy(s.begin(), s.end(), back_inserter(s2));
        cout << s2 << endl;
    }
    return 0;
}
