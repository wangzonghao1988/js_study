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
    int num = 0;
    vector<Student_info> vs;

    cout << "input-name:" << endl;
    while(++num < 4 && read(cin, s)) {
        cout << "input-name:" << endl;
        vs.push_back(s);
    } 

    sort(vs.begin(), vs.end(), compare);

    for (vector<Student_info>::iterator i = vs.begin(); i != vs.end(); i++) {
        cout << i->name << grade(*i) << endl;
    }
    //cout << grade(s) << endl;
}

