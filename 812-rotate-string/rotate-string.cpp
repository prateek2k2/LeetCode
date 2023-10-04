class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length()!=goal.length())
        return false;
        string flag=s+s;
        if(flag.find(goal)!=-1)
        {
            return true;
        }
        else
        return false;

        
    }
};