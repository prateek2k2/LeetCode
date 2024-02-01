class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int temp=*max_element(candies.begin(), candies.end());
        int n=candies.size();
        for(int i=0;i<n;i++)
        {
            if((candies[i]+extraCandies)>=temp)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
        
    }
};