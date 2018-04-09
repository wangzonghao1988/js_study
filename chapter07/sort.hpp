/******************************************************************
#
#                    Filename: sort.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 13:12:00
#
******************************************************************/
#include "../head.hpp"

typedef vector<int> count_num;
typedef map<string, count_num> m;
typedef pair<string, count_num> p;
typedef vector<p> vp;

typedef m::const_iterator m_cons_iter;
typedef m::iterator m_iter;

void sortMapByValue(m&, vp&);

int cmp(const p&, const p&);


