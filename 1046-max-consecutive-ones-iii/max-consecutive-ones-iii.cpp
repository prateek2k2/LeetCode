class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i = 0, j = 0, n = nums.size(), zero_count = 0, ans = INT_MIN;
        
        while(j < n){
            
            if(nums[j] == 0){
                zero_count++;
            }
            while(zero_count > k){
                
                if(nums[i] == 0)
                {
                    zero_count--;      
                }
                
                i++;
            }
            
            ans=max(ans, j-i + 1);
            
            j++;
            
        }
        
        return ans;
        
    }
};