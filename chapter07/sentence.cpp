/******************************************************************
#
#                    Filename: sentence.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 10:23:47
#
******************************************************************/
#include "sentence.hpp"

bool bracketed(const string& s)
{
    return s.size() > 1 && s[0] == '<' && s[s.size()-1] == '>';
}

void gen_sentence_aux(const Grammer& g, const string& word, vector<string>& ret)
{
    if (!bracketed(word))
        ret.push_back(word);
    else {
        Grammer::const_iterator it = g.find(word);
        if (it == g.end())
            throw logic_error("empty rule");

        const Rule_collection& c = it->second;
        const Rule& r = c[nrand(c.size())];

        for (Rule::const_iterator i = r.begin(); i != r.end(); ++i)
            gen_sentence_aux(g, *i, ret);
    }
}

vector<string> gen_sentence(const Grammer& g)
{
    vector<string> ret;
    gen_sentence_aux(g, "<sentence>", ret);
    return ret;
}

