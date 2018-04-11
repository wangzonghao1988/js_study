/******************************************************************
#
#                    Filename: Core.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-11 17:18:40
#
******************************************************************/
#include "../head.hpp"
#include "grade.hpp"

class Core {
public:
  Core():midterm(0), final(0) {};
  Core(istream& is) { read(is); };
  virtual ~Core(){}
  string name() const;
  virtual istream& read(istream&);
  virtual double grade() const;
protected:
  istream& read_common(istream&);
  istream& read_hw(istream&);
  double midterm, final;
  vector<double> homework;
private:
  string n;
};

inline bool compare(const Core& c1, const Core& c2)
{
	return c1.name() < c2.name();
}


inline bool compare_grades(const Core& c1, const Core& c2)
{
	return c1.grade() < c2.grade();
}


inline bool compare_Core_ptrs(const Core* c1, const Core* c2)
{
	return compare(*c1, *c2);
}

