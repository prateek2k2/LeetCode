#include <iostream>
#include <vector>
class Solution {
public:
    void finder(vector<vector<int>>& res, vector<int>& temp,
                const vector<int>& nums, int j) {
        res.push_back(temp);
        for (int i = j; i < nums.size(); ++i) {
            temp.push_back(nums[i]);
            finder(res, temp, nums, i + 1);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(const vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        finder(res, temp, nums, 0);
        return res;
    }
};