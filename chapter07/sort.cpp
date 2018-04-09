/******************************************************************
#
#                    Filename: sort.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 13:12:17
#
******************************************************************/
#include "sort.hpp"

int cmp(const p& x, const p& y)
{
    return x.second.size() < y.second.size();
}

void sortMapByValue(m& t_map, vp& vec_pair)
{
    m_iter curr = t_map.begin();

    for (; curr != t_map.end(); curr ++) {
        vec_pair.push_back(make_pair(curr->first, curr->second));
    }

    sort(vec_pair.begin(), vec_pair.end(), cmp);
}
