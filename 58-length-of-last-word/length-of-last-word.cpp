class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size(),count=0,temp=0;
        for(int i=size-1;i>=0;i--){
            if(s[i]==' '&&temp)break;
            if(s[i]!=' '){
                temp=1;
                count++;
            }
        }
        return count;
    }
};