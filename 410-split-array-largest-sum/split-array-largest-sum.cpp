class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int count = 1; // Number of subarrays
            int currSum = 0; // Current sum of the subarray
            
            for (int num : nums) {
                if (currSum + num > mid) {
                    count++;
                    currSum = num;
                } else {
                    currSum += num;
                }
            }
            
            if (count <= k) {
                // We can split into k or fewer subarrays, so reduce the maximum sum
                right = mid;
            } else {
                // Need more subarrays, so increase the maximum sum
                left = mid + 1;
            }
        }
        
        return left;
    }
};
