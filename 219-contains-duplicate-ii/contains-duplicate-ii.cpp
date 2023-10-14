class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> elements;
    for (int i = 0; i < nums.size(); ++i) {
        if (i > k) {
            elements.erase(nums[i - k - 1]);
        }
        
        if (elements.find(nums[i]) != elements.end()) {
            return true;
        }
        
        elements.insert(nums[i]);
    }
    
    return false;
    }
};
