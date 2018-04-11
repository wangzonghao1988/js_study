/******************************************************************
#
#                    Filename: 04.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-11 15:43:57
#
******************************************************************/
#include "../head.hpp"

double average(vector<double>& number)
{
    return accumulate(number.begin(), number.end(), 0.0) / number.size();
}

int main()
{
    vector<double> num;

    num.push_back(1.2);
    num.push_back(1.3);
    num.push_back(1.4);
    num.push_back(1.5);
    num.push_back(1.6);
    num.push_back(1.9);

    cout << average(num) << endl;
    return 0;
}
