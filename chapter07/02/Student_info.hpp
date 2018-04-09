/******************************************************************
#
#                    Filename: Student_info.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 16:24:14
#
******************************************************************/
#ifndef GUARD_Student_info
#define GUARD_Student_info

#include "../../head.hpp"

struct Student_info {
    string name;   
    double midterm, final;
    vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
istream& read(istream&, Student_info&);
istream& read_hw(istream&, vector<double>&);

#endif
