#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<vector<string>> groupOfAnagrams;
        unordered_map<string,vector<string>> Contain;
        for(string s:strs)
        {
            int freq[26]={0};
            for(char c :s)
            {
                freq[c-'a']++;
            }
            string hashString="";
            for(int i=0;i<26;i++)
            {
                hashString+=to_string(freq[i])+"#";
            }
            Contain[hashString].push_back(s);
        }
        for(auto& keyValue:Contain)
        {
            groupOfAnagrams.push_back(keyValue.second);
        }
        return groupOfAnagrams;
    }
};