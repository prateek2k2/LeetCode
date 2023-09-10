class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        for(int i=0;i<=haystack.length();i++)
        {
                string s=haystack.substr(i,l);
                if(s==needle)
                return i;
            }
            
        return -1;
        
    }
};