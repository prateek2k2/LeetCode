class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int ans = 0; // Initialize ans to 0
        while(j<nums.size())
        {
            mp[nums[j]]++;
            if(mp[nums[j]]>k)
            {
                while(nums[i]!=nums[j])
                {
                    mp[nums[i]]--;
                    i++;
                }
                mp[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
