class Solution {
public:
    int maxVowels(string s, int k) {
        const int m = s.size();
        int ans = 0;
        int count = 0;
        for(int i=0;i<k;++i){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            {
                count+=1;
            }
        }
        ans = max(ans,count);
        for(int i=k;i<m;++i){
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' ||s[i-k]=='o' ||s[i-k]=='u')
            {
                count-=1;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' ||s[i]=='u')
            {
                count+=1;
            }
            ans = max(ans,count);
        }
        return ans;
    }
        
};