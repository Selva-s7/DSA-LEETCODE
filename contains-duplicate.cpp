#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        if(nums.size()==s.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    Solution s;
    vector<int> n={};//input can be given
    s.containsDuplicate(n)
}