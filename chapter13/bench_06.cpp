/******************************************************************
#
#                    Filename: bench_06.cpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-13 11:34:30
#
******************************************************************/
#include "student_info_hw.hpp"

int main()
{
    vector<student_info_hw> students;
    student_info_hw record;
    string::size_type maxlen = 0;

    while (record.read(cin)) {
        maxlen = max(maxlen, record.name().size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(), student_info_hw::compare_stu);
    for (vector<student_info_hw>::size_type i = 0; i != students.size(); ++i)
    {
        cout << students[i].name() << string(maxlen + 1 - students[i].name().size(), ' ');
        if (!students[i].valid()) {
            cout << "not valid." << endl;
        }
        try {
            double final_grade = students[i].grade();
            char c = students[i].credit();
            cout << final_grade << "   " << c << endl;
        } catch (domain_error e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}

