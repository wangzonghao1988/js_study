/******************************************************************
#
#                    Filename: grammer.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 11:30:39
#
******************************************************************/
#include "grammer.hpp"

Grammer read_grammar(istream& is)
{
    Grammer ret;
    string line; 

    while (getline(is, line)) {
         list<string> entry = split(line);
         if (entry.empty())
             throw logic_error("entry empty");

         ret[*entry.begin()].push_back(Rule(++entry.begin(), entry.end()));
    }

    return ret;
}

