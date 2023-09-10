class Solution {
public:
    bool isPalindrome(string s) {
       int s1=0;
       int e=s.size()-1;
       while(s1<=e){
           if(!isalnum(s[s1]))
           {
               s1++;
               continue;
            }
           if(!isalnum(s[e]))
           {
               e--;
               continue;
               }
           if(tolower(s[s1])!=tolower(s[e]))
           return false;
           else
           {
               s1++;
               e--;
           }
       }
       return true;
}
};