/******************************************************************
#
#                    Filename: t_find.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-12 14:54:06
#
******************************************************************/
#include "../head/hpp"

template <class In, class X>
In find(In begin, In end, const X& x)
{
    while (begin != end && *begin != x)
        begin ++;

    return begin;
}
