/******************************************************************
#
#                    Filename: Student_info.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 19:42:39
#
******************************************************************/
#include "../../head.hpp"

class Student_info {
public:
    Student_info():midterm(0), final(0) {}
    Student_info(istream& is) {read (is);}
    istream& read(istream&);
    double grade();
	char credit();
    string name() const {return n;}
    char get_credit() const {return c;}
private:
    string n;
	char c;
    double midterm, final;
};

inline bool compare_name(const Student_info& x, const Student_info& y)
{
    return x.name() < y.name();
}

inline bool compare_credit(const Student_info& x, const Student_info& y)
{
    return x.get_credit() > y.get_credit();
}

