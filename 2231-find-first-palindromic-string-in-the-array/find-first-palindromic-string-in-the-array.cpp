class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0; i<words.size(); i++)
        {
            string s = words[i];
            bool isPalindrome = true;
            for(int j=0, k=s.size()-1; j<k; j++, k--)
            {
                if(s[j] != s[k])
                {
                    isPalindrome = false;
                    break;
                }
            }
            if(isPalindrome)
                return s;
        }
        return "";
    }
};
