/******************************************************************
#
#                    Filename: bench_01.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-11 17:52:31
#
******************************************************************/
#include "Grad.hpp"

int main()
{
    vector<Core*> students;
    Core* record;
    char ch;
    string::size_type maxlen = 0;

    while(cin >> ch) {
        if (ch == 'u') {
            record = new Core;
            cout << "underg: " << endl;
        }
        else if (ch == 'g') {
            record = new Grad;
            cout << "grad:" << endl;
        } else {
            break;
        }
        record->read(cin);
        maxlen = max(maxlen, record->name().size());
        students.push_back(record);
    }
    sort(students.begin(), students.end(), compare_Core_ptrs);

    for(vector<Core*>::size_type i = 0; i != students.size(); i++) {
        cout << students[i]->name() << string(maxlen + 1 - students[i]->name().size(), ' ');
        try {
            double final_grade = students[i]->grade();
            cout << final_grade << endl;
        }catch(domain_error e){
            cout << e.what() << endl;
        }
        delete students[i];
    }
    return 0;
}
