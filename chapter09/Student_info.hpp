/******************************************************************
#
#                    Filename: Student_info.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 19:42:39
#
******************************************************************/
#include "../head.hpp"

class Student_info {
public:
    Student_info():midterm(0), final(0) {}
    Student_info(istream& is) {read (is);}
    istream& read(istream&);
    double grade();
    string name() const {return n;}
    bool valid() const {return !homework.empty(); }

private:
    istream& read_hw(istream&);

    string n;
    double midterm, final;
    vector<double> homework;
};

inline bool compare(const Student_info& x, const Student_info& y)
{
    return x.name() < y.name();
}
