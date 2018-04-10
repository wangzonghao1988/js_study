/******************************************************************
#
#                    Filename: find_url.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 15:49:44
#
******************************************************************/
#include "../../head.hpp"
vector<string> find_urls(const string&);

vector<string> find_urls(istream&);

string::const_iterator url_end(string::const_iterator ,string::const_iterator );

bool not_url_char(char);

string::const_iterator url_beg(string::const_iterator ,string::const_iterator);
