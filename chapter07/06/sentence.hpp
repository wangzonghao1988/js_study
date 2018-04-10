/******************************************************************
#
#                    Filename: sentence.hpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 10:22:28
#
******************************************************************/
#include "../../head.hpp"
#include "split.hpp"
#include "nrand.hpp"

typedef vector<string> Rule;
typedef vector<Rule> Rule_collection;
typedef map<string, Rule_collection> Grammer;

Grammer read_grammar(istream&);

void gen_sentence_aux(const Grammer&, const string&, vector<string>&);

vector<string> gen_sentence(const Grammer&);

bool bracketed(const string&);

