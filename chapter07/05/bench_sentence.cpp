/******************************************************************
#
#                    Filename: bench_sentence.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 11:00:06
#
******************************************************************/
#include "sentence.hpp"
#include "nrand.hpp"
#include "grammer.hpp"

int main()
{
    ifstream ifs("sen.txt");

    list<string> sentence = gen_sentence(read_grammar(ifs));

    list<string>::const_iterator it = sentence.begin();
    if (!sentence.empty()) {
        cout << *it;
        ++ it;
    }

    while (it != sentence.end()) {
        cout << " " << *it;
        ++it;
    }
    cout << endl;
    return 0;
}
