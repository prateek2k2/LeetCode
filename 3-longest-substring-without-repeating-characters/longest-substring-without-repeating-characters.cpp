class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int maxLen = 0;
        int start = -1;
        for(int i=0; i<s.length(); i++) {
            if(mp.count(s[i]) != 0) {
                start = max(start, mp[s[i]]);
            }
            mp[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }
        return maxLen;
    }
};
