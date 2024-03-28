class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0,j=0;
        int ans = INT_MIN;
        while(j<nums.size())
        {
            mp[nums[j]]++;
            //if(mp[nums[j]]>k)
            //{
                while(mp[nums[j]]>k && i<=j)
                {
                    mp[nums[i]]--;
                    i++;
                }
               // mp[nums[i]]--;
                //i++;
            //}
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};
