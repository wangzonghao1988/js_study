/******************************************************************
#
#                    Filename: xref.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 12:10:27
#
******************************************************************/
#include "xref.hpp"

map<string, vector<int> >
xref(istream& in, vector<string> find_words(const string&))
{
    string line;
    int line_number = 0;
    map<string, vector<int> > ret;

    while (getline(in, line)) {
        if (line == "quit") break;
        line_number ++;
        vector<string> words = find_words(line);

        for (vector<string>::const_iterator it = words.begin(); it != words.end(); it++) {
            ret[*it].push_back(line_number);
        }
    }

    return ret;
}
