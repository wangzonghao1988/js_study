/******************************************************************
#
#                    Filename: align.cpp
#
#                    Author: 4ever-young
#                    Description: ----
#             Create: 2018-04-16 11:13:01
#
******************************************************************/
#include "../head.hpp"

static union { char c[4]; unsigned long l; } endian_test = { { 'L', '?', '?', 'B' } };  
#define ENDIANNESS ((char)endian_test.l)  

#define ALIGN(x,a)      __ALIGN_MASK(x,(typeof(x))(a)-1)  
#define __ALIGN_MASK(x,mask)    (((x)+(mask))&~(mask))  

int main()
{
   cout << ALIGN(13, 8) << endl;
   cout << ENDIANNESS << endl;
}
