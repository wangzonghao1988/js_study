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

void gen_sentence_aux(const Grammer& g, const string& word, list<string>& ret)
{
    if (!bracketed(word))
        ret.push_back(word);
    else {
        Grammer::const_iterator it = g.find(word);
        if (it == g.end())
            throw logic_error("empty rule");

        const Rule_collection& c = it->second;

        Rule_collection::const_iterator rc_it2 = c.begin();
        advance(rc_it2, nrand(c.size())); 
        const Rule& r = *rc_it2;
        for (Rule::const_iterator i = r.begin(); i != r.end(); ++i)
            gen_sentence_aux(g, *i, ret);
    }
}

list<string> gen_sentence(const Grammer& g)
{
    list<string> ret;
    gen_sentence_aux(g, "<sentence>", ret);
    return ret;
}

