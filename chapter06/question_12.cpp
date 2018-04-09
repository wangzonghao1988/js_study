#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    string str; 

    vector<string> vec_str;
    vec_str.push_back("1hello world!");
    vec_str.push_back("2hello world!");
    vec_str.push_back("3hello world!");
    vec_str.push_back("4hello world!");

    str = accumulate(vec_str.begin(), vec_str.end(), string(""));

    cout << str << endl;
}
