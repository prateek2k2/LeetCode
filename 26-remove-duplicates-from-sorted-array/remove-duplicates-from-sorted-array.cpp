class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums[i-1]=INT_MAX;
            }
        }
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=INT_MAX)
            {
                c++;
            }
        }
        return c;
        
        
    }
};