class Solution {
private:
    void solve(string digits, vector<string>& ans, int index, string output, string mapping[]) {
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string temp = mapping[number];
        for (int i = 0; i < temp.length(); i++) {
            output.push_back(temp[i]);
            solve(digits, ans, index + 1, output, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        if (digits.length() == 0) return ans;

        int index = 0;
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, ans, index, output, mapping);
        return ans;
    }
};