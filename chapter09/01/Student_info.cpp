/******************************************************************
#
#                    Filename: Student_info.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 19:46:13
#
******************************************************************/
#include "Student_info.hpp"
#include "grade.hpp"

istream& Student_info::read(istream& is)
{
    is >> n >> midterm >> final;
    read_hw(is);
    grade();
    return is;
}

double Student_info::grade()
{
     g = ::grade(midterm, final, homework);
     return g;
}

istream& Student_info::read_hw(istream& in)
{
    if (in) {
       homework.clear();

       double x;
       int num = 0;
       while(++num < 5 && in >> x) {
           homework.push_back(x);
       }

       in.clear();
    }
    return in;
}

