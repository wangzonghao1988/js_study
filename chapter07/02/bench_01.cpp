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
#include "assign_range.hpp"

#define TOTAL_STUDENT_NUM 3

int main()
{
    Student_info s;
    int num = 0;
    vector<Student_info> vs;

    cout << "input-name:" << endl;
    while(++num <= 3 && read(cin, s)) {
        cout << "input-name:" << endl;
        vs.push_back(s);
    } 

    map<char, vector<string> > name_grade = assign_range(vs);

    for(map<char, vector<string> >::iterator i = name_grade.begin(); i != name_grade.end(); i++){
        cout << i->first << " ";
        for ( vector<string>::iterator j = (i->second).begin(); j != (i->second).end(); j++) {
            cout << *j << " ";
        }
        cout << endl;
    }

    return 0;
}

