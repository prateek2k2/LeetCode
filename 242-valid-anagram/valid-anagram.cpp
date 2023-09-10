class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int c=0;
        if(s.length()!=t.length())
        {
           return false;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==t[i])
            c++;
        }
        if(c==s.length())
        return true;
        else 
        return false;
        
    }
};