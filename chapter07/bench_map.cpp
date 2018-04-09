#include "../head.hpp"

int main()
{
    string s;
    map<string, int> counters; 
    int num = 0;
    while (cin >> s && ++num < 5)
        ++counters[s];

    for (map<string, int>::const_iterator it = counters.begin(); it != counters.end(); ++it)
    	cout << it->first << "\t" << it->second << endl;
    
    return 0;
}
