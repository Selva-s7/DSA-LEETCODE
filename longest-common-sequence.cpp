#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> setnum(nums.begin(),nums.end());
        int l;
        int longest=0;
        for(int num:setnum)
        {   l=1;
            if(setnum.find(num-1)!=setnum.end())
            {
                continue;
            }
            else
            {
                while(setnum.count(num+1))
                {
                    num=num+1;
                    l++;
                }
            }
           longest=max(longest,l);
        }

        return longest;
    }
};