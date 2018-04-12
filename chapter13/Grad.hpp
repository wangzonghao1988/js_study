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

class Grad: public Core {
protected:
	Grad* clone() const {return new Grad(*this); }
public:
    Grad(): thesis(0) {};
    Grad(istream& is) { read(is); }
	~Grad() {cerr << "Grade :: ~Grade()" << endl;}
	istream& read(istream&);
    double grade() const;
private:
    double thesis;
};
