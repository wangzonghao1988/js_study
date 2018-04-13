/******************************************************************
#
#                    Filename: student_info.cpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-12 10:54:52
#
******************************************************************/
#include "student_info.hpp"

istream& student_info::read(istream& is)
{
    delete cp;

    char ch;
	cin >> ch;

    if (ch == 'u')
        cp = new Core(is);
    else
        cp = new Grad(is);

    return is;
}

student_info::student_info(const student_info& s):cp(0)
{
    if (s.cp) cp = s.cp->clone();
}

student_info& student_info::operator =(const student_info& s)
{
    if (&s != this) {
        delete cp;
        cp = s.cp ? s.cp->clone() : 0;
    }

	return *this;
}

