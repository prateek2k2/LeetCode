class Solution {
public:
int longestSemiRepetitiveSubstring(string st) { 
        int i = 0 , j = 0; 
        int result = 0; int flag = 1; 
        if(st.size()<=2)
        {
        return st.size(); 
        }
        for( j = 1 ; j < st.size() ; j++) 
        { 
            flag++; 
            if(st[j]==st[j-1])
            { 
                flag = j-i+1; 
                i = j; 
            } 
      if(result<flag)
      result = flag;    
        } 
        return result; 
    }
};

