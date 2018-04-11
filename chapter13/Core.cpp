/******************************************************************
#
#                    Filename: Core.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-11 17:25:21
#
******************************************************************/
#include "Core.hpp"

string Core::name() const {return n;}

double Core::grade() const
{
    return ::grade(midterm, final, homework);
}

istream& Core::read_common(istream& in)
{
    in >> n >> midterm >> final;
    return in;
}

istream& Core::read(istream& in)
{
    cout << "read common1" << endl;
    read_common(in);
	cout << "read homework" << endl;
    read_hw(in);
	cout << "read finish" << endl;
    return in;
}

istream& Core::read_hw(istream& in)
{
    if (in) {
           homework.clear();
    
           double x;
           int num = 0;
           while(++num < 3 && in >> x) {
               homework.push_back(x);
           }
           cout << "finish read hw" << endl;
           in.clear();
        }
        return in;
}
