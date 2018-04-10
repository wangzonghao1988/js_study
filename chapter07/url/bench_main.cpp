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
    map<string,vector<int> > ret = find_urls(ifs);

    for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it) {
        cout << it->first << " occurs on line(s): ";

        vector<int>::const_iterator line_it = it->second.begin();
        cout << *line_it; 
        ++line_it;
        while (line_it != it->second.end()) {
            cout << ", " << *line_it;
            ++line_it;
        }
        cout << endl;
    }
    return 0;
}
