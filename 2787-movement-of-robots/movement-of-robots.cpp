class Solution {
public:
    int modulus=(1e9 + 7);
    int sumDistance(vector<int>& nums, string s, int d) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') 
            {
                nums[i] -= d;
            } 
            else if (s[i] == 'R') 
            {
                nums[i] += d;
            }
        }

        sort(nums.begin(), nums.end());
        long long suma = 0;
        long long result = 0;
        for (int i = 0; i < nums.size(); i++) {
            result += 1LL*nums[i] * i - suma;
            result%=modulus;
            suma += nums[i];
            suma%=modulus;
        }

        return result % (int)(1e9 + 7);
    }
};
