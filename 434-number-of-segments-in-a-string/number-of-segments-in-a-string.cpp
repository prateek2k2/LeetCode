class Solution {
public:
    int countSegments(string s) {

        int n = s.length();

        int ans = 0;

        bool temp = 0;

        for(int i = 0; i < n; i++) {

            if(s[i] != ' ' && temp == 1 && i != n - 1) 
            continue;

            if(s[i] == ' ' && temp == 0) 
            continue;

            if(s[i] != ' ' && temp == 0) {

                temp = 1;
            }

            else if(s[i] == ' ' && temp == 1) {

                temp = 0;

                ans++;
            }

            if(i == n - 1 && temp == 1) 
            ans++;
        }

        return ans;
        
    }
};