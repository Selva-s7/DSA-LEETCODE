#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        else
        {
            unordered_map<char,int> s1;
            for(char d:s)
            {
                s1[d]++;
             }
            for(char c:t)
            {
                s1[c]--;
            }
            for (auto& p:s1)
            {
                if (p.second!=0)
                    return false;
            }
            return true;
        }
    }
};