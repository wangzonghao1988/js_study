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

class student_info;

class Core {
  friend class student_info;
protected:
  virtual Core* clone() const { return new Core(*this); }
public:
  Core():midterm(0), final(0) {};
  Core(istream& is) { read(is); };
  virtual ~Core(){cerr << "Core::~Core()" << endl;}
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

    double grade() const {
        if (cp) return cp->grade();
		else throw runtime_error("uninitialized student!");
	}

    static bool compare_stu(const student_info& s1, const student_info& s2)
    {
        return s1.name() < s2.name();
    }

private:
    Core* cp;
};

