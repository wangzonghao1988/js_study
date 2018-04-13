/******************************************************************
#
#                    Filename: t_median.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-12 14:43:17
#
******************************************************************/
#include "../head.hpp"

template <class T>
T median(vector<T> v)
{
    typedef typename vector<T>::size_type vec_sz;

    vec_sz size = v.size();
    if (size == 0)
        throw domain_error("median of an empty vector");

    sort(v.begin(), v.end());

    vec_sz mid = size / 2;

    return mid == 0 ? (v[mid] + v[mid-1]) / 2 : v[mid];
}












