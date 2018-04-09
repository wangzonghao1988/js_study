#include "split.hpp"

typedef vector<string>::iterator iter;

int main()
{
    string s = "hello world";
    vector<string> vec_str = split(s);

    iter i = vec_str.begin();
    for (i = vec_str.begin(); i != vec_str.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}
