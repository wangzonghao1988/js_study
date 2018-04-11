/******************************************************************
#
#                    Filen: bench_07.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 20:01:16
#
******************************************************************/
#include "Student_info.hpp"

int main()
{ 
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;
    
    while (record.read(cin)) { // changed
         maxlen = max(maxlen, record.name().size()); // changed
         students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);
    for (vector<Student_info>::size_type i = 0;i != students.size(); ++i) {
        cout << students[i].name() << string(maxlen + 1 - students[i].name().size(), ' ');
        try {
            double final_grade = students[i].grade(); // changed
            cout << final_grade <<  endl;
        } catch (domain_error e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}
