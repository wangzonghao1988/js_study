/******************************************************************
#
#                    Filename: nrand.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 11:08:49
#
******************************************************************/
#include "nrand.hpp"

int nrand(int n)
{
    if (n <= 0 || n > RAND_MAX)
        throw domain_error("Argument to nrand is out of range");

    const int bucket_size = RAND_MAX / n;
    int r;

    do r = rand() / bucket_size;
    while(r >= n);
    
    return r;
}
