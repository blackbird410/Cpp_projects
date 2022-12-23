#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

#define LOG(x) cout << x <<endl;

using namespace std;

int lengthOfLongestSubstring(string s) 
{
    map<char, int> dct;
    string l_s = "";
    vector<string> li;
    int i = 0;

    for(i = 0; i < s.size(); i++)
    {
        if (dct[s[i]] == 1)
        {
            li.push_back(l_s);
            dct.clear();
            l_s = s[i];
        }
        else
        {
            l_s += s[i];
        }
        dct[s[i]] = 1;
    }

    int max = 0;

    for(i = 0; i < li.size(); i++)
    {
        if (li[i].size() > max)
        {
            max = li[i].size();
        }
    }

    return max;
        
}

void case_assert(int actual, int expected)
{
    if (actual == expected)
    {
        LOG("PASSED");
        LOG("\n_____________________\n");
    } 
    else
    {
        LOG("FAILED");
        LOG(to_string(actual) + " != " + to_string(expected));
        LOG("\n_____________________\n");
    }
}

int main() 
{

    int a = lengthOfLongestSubstring("bbb");
    LOG("S1 : bbb");
    case_assert(a, 1);
    a = lengthOfLongestSubstring("aab");
    LOG("S2 : aab");
    case_assert(a, 2);
    a = lengthOfLongestSubstring("pwwkew");
    LOG("S3 : pwwkew");
    case_assert(a, 3);
    a = lengthOfLongestSubstring("anviaj");
    LOG("S4 : anviaj");
    case_assert(a, 4);
    a = lengthOfLongestSubstring("dvdf");
    LOG("S5 : dvdf");
    case_assert(a, 3);

}