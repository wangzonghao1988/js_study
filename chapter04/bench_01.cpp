/******************************************************************
#
#                    Filename: bench_01.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 16:50:36
#
******************************************************************/
#include "Student_info.hpp"
#include "grade.hpp"

int main()
{
   Student_info s; 
   read(cin, s);
   cout << grade(s) << endl;;
}

