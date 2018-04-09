/******************************************************************
#
#                    Filename: assign_range.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-09 18:01:57
#
******************************************************************/
#include "assign_range.hpp"

map<char, vector<string> > assign_range(vector<Student_info>& vs)
{
    map<char, vector<string> > name_grade;
    
    for (vector<Student_info>::iterator i = vs.begin(); i != vs.end(); i++) {
        //cout << i->name << " " << grade(*i) << endl;
        int d = grade(*i)/10;
        switch(d) { 
            case 10:
                name_grade['A'].push_back(i->name);
                break;
            case 9:
                name_grade['A'].push_back(i->name);
                break;
            case 8:
                name_grade['B'].push_back(i->name);
                break;
            case 7:
                name_grade['C'].push_back(i->name);
                break;
            case 6:
                name_grade['D'].push_back(i->name);
                break;
            default:
                name_grade['F'].push_back(i->name);
                break;
        }
    }

    return name_grade;
}

