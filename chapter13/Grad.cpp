/******************************************************************
#
#                    Filename: Grad.cpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-11 17:39:24
#
******************************************************************/
#include "Grad.hpp"

istream& Grad::read(istream& in)
{
    cout << "read common" << endl;
    read_common(in);
	cout << "thesis" << endl;
    in >> thesis;
	cout << "homework" << endl;
    read_hw(in);
	cout << "read finish" << endl;
    return in;
}

double Grad::grade() const
{
    return min(Core::grade(), thesis);
}
