/******************************************************************
#
#                    Filename: bench_main.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 18:17:07
#
******************************************************************/
#include "find_url.hpp"

int main()
{
    string s = "asdfdsfdsf  ksdflsdfskdf http://www.baidu.com/~ dskfsdjfkdslf http://www.qq.com%^& skdfjsdlflds";

    ifstream ifs("1.txt");
    vector<string> vs = find_urls(ifs);

    vector<string>::iterator i = vs.begin();
    for (i = vs.begin(); i != vs.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}
