/******************************************************************
#
#                    Filename: Grad.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-11 17:19:03
#
******************************************************************/
#include "Core.hpp"
#include "../head.hpp"

class Grad: public Core {
public:
    Grad(): thesis(0) {};
    Grad(istream& is) { read(is); }
	istream& read(istream&);
    double grade() const;
private:
    double thesis;
};
