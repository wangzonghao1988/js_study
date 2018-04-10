/******************************************************************
#
#                    Filename: split.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 10:27:26
#
******************************************************************/
#include "split.hpp"

bool space (char c)
{
    return isspace(c);
}

bool notspace(char c)
{
    return !isspace(c);
}

list<string> split(const string & str)
{
    typedef string::const_iterator iter;

    list<string> ret;
    iter i = str.begin();

    while(i != str.end()) {
        i = find_if(i, str.end(), notspace);

        iter j = find_if(i, str.end(), space);

        if (i != str.end())
            ret.push_back(string(i, j));

        i = j;
    }
    ret.erase(unique(ret.begin(), ret.end()), ret.end());
    return ret;
}

