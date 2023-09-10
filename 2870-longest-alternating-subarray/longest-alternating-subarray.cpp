class Solution
{
public:
    int alternatingSubarray(vector<int> &nums)
    {
        int f_result = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            int c = 1;
            int temp_f = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (temp_f == 0 and nums[j] == nums[i] + 1)
                    c++, temp_f = 1;
                else if (temp_f == 1 and nums[i] == nums[j])
                    c++, temp_f = 0;
                else
                    break;
            }
            if (c > 1)
                f_result = max(f_result, c);
        }
        return f_result;
    }
};