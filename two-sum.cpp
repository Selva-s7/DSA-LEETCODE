#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Contain;
        int complement;
        int index=0;
        for(int num :nums)
        {   
            complement=target-num;
            if(Contain.find(complement)!=Contain.end())
            {
                return {index,Contain[complement]};
            }
            Contain[num]=index;
            index++;

        }
         return {-1,-1};
    }  
};