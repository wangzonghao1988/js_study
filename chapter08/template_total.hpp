/******************************************************************
#
#                    Filename: template_total.hpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-13 15:43:25
#
******************************************************************/
#include "../head.hpp"

inline bool space (char c)
{
    return isspace(c);
}

inline bool notspace(char c)
{
    return !isspace(c);
}

template <class In, class X>
In find(In begin, In end, const X& x)
{
    while (begin != end && *begin != x)
        begin ++;

    return begin;
}

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

template <class Out>
void split(const string& str, Out os) {
    typedef string::const_iterator iter;

    iter i = str.begin();

    while (i != str.end()) {
        i = find_if(i, str.end(), notspace);
        iter j = find_if(i, str.end(), space);

        if (i != j)
            *os++ = string(i, j);

        i = j;
    }
}
