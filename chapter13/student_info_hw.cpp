/******************************************************************
#
#                    Filename: student_info_hw.cpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-13 11:25:45
#
******************************************************************/
#include "student_info_hw.hpp"

double student_info_hw::grade() const
{
	if (cp) {
        if (cp->valid())
			return cp->grade();
        else
			cout << "Test ... Test" << endl;
	}
	else throw runtime_error("uninitialized student!");
}

