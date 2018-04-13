/******************************************************************
#
#                    Filename: student_info.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-12 10:54:34
#
******************************************************************/
#include "Grad.hpp"

class student_info {
public:
    student_info():cp(0) {}
    student_info(istream& is):cp(0) { read(is); }
    student_info(const student_info&);
    student_info& operator= (const student_info&);
    ~student_info() { delete cp; }

    istream& read (istream&);
    string name() const {
        if (cp) return cp->name();
        else throw runtime_error("uninitialized student!");
    }
    
    bool valid() const {
        if (cp) return cp->valid();
        else throw runtime_error("undo homework!");
    }

    double grade() const {
        if (cp) return cp->grade();
        else throw runtime_error("uninitialized student!");
    }

    char credit() {
        if (cp) return cp->credit();
        else throw runtime_error("uninitialized student!");
	}
	
    static bool compare_stu(const student_info& s1, const student_info& s2)
    {
        return s1.name() < s2.name();
    }

private:
    Core* cp;
};

