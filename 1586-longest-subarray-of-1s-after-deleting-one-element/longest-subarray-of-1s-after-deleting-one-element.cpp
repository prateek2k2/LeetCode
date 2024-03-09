class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zero_count = 0;
        int ans = 0;
        int i = 0;
        int j=0;
        int n = nums.size();
        while(j<n)
        {
            if(nums[j]==0)
            {
                zero_count++;
            }
             while (zero_count > 1) 
             { 
                if (nums[i] == 0) 
                {
                    zero_count--;
                }
                i++;
            }
            ans = max(ans, j - i);
            j++;
        }
        return ans;
    }
};
