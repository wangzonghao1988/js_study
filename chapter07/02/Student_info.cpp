/******************************************************************
#
#                    Filename: Student_info.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 16:29:24
#
******************************************************************/
#include "Student_info.hpp"

bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
    is >> s.name >> s.midterm >> s.final;

    read_hw(is, s.homework);
    return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if (in) {
       hw.clear();

       double x;
       int num = 0;
       while(++num <= 3 && cin >> x) {
           hw.push_back(x);
       }

       in.clear();
    }
    return in;
}

