/******************************************************************
#
#                    Filename: xref.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 12:10:04
#
******************************************************************/
#include "split.hpp"

extern
map<string, vector<int> > xref(istream& , vector<string>(*)(const string &) = split);

