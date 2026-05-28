#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> freq;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;
        for (int num : nums)
        {
            freq[num]++;
        }
        for (auto bucket : freq)
        {
            buckets[bucket.second].push_back(bucket.first);
        }
        for (int i = buckets.size() - 1; result.size() < k; i--)
        {
            for (int x : buckets[i])
            {
                if (result.size() == k)
                {
                    return result;
                }
                result.push_back(x);
            }
        }
        return result;
    }
};