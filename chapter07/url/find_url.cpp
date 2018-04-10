/******************************************************************
#
#                    Filename: find_url.cpp
#
#                    Author: 4ever-young                      
#                    Description: ----                          
#             Create: 2018-04-10 15:54:32
#
******************************************************************/
#include "find_url.hpp"

vector<string> find_urls(const string& s)
{
    vector<string> ret;

    typedef string::const_iterator iter;
    iter b = s.begin(), e = s.end();

    while (b != e) {
       b = url_beg(b, e); 

       if (b != e) {
           iter after = url_end(b, e);
           ret.push_back(string(b, after));
           b = after;
       }
    }

    return ret;
}

map<string, vector<int> > find_urls(istream& is)
{
    map<string, vector<int> > m_vec;

    string line;
    int line_num = 0;

    while(getline(is, line)) {
        line_num ++;
        typedef string::const_iterator iter;
        iter b = line.begin(), e = line.end();

        while (b != e) {
           b = url_beg(b, e); 

           if (b != e) {
               iter after = url_end(b, e);
               m_vec[string(b, after)].push_back(line_num);
               b = after;
           }
        }
    }

    return m_vec;
}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e)
{
    return find_if(b, e, not_url_char);
}

bool not_url_char(char c)
{
    static const string url_ch =  "~;/?:@=&$-_.+!*'(),";
    return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

string::const_iterator url_beg(string::const_iterator b, string::const_iterator e)
{
    static const string sep = "://";
    typedef string::const_iterator iter;

    iter i = b; 

    while ( (i = search(i, e, sep.begin(), sep.end())) != e) {
        iter beg = i;
        while(beg != b && isalpha(beg[-1]))
            -- beg; 

        if(i != beg && !not_url_char(i[sep.size()]))
            return beg;
    }

    return e;
}

