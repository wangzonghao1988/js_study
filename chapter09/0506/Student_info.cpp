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
    return is;
}

double Student_info::grade()
{
    return ::grade(midterm, final);
}

char Student_info::credit() 
{	 
    double g = grade();
    g >= 60 ? c = 'P' : c = 'F';
    return c;
}

