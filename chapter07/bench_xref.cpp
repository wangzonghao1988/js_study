/******************************************************************
#
#                    Filename: bench_xref.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 12:24:14
#
******************************************************************/
#include "xref.hpp"
#include "sort.hpp"

int main()
{
    //call xref using split by default
    map<string, vector<int> > ret = xref(cin);
    vector<pair<string, vector<int> > > map_vector;
    sortMapByValue(ret, map_vector); 
    //sort by value
#if 1
    for (int i = 0; i < map_vector.size(); i++) { 
        cout << map_vector[i].first << ":";
        for (vector<int>::iterator j = map_vector[i].second.begin(); j != map_vector[i].second.end(); j++) {
            cout << *j << "  ";
        }
        cout << endl;
    }
#else
    // write the results
    for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it) {
        // write the word
        cout << it->first << " occurs on line(s): ";
        // followed by one or more line numbers
        vector<int>::const_iterator line_it = it->second.begin();
        cout << *line_it; // write the first line number
        ++line_it;
        // write the rest of the line numbers, if any
        while (line_it != it->second.end()) {
            cout << ", " << *line_it;
            ++line_it;
        }

    // write a new line to separate each word from the next
        cout << endl;
    }
#endif
    return 0;
}

