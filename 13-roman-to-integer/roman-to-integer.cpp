class Solution {
public:
    int romanToInt(string s) 
    {
 int final = 0;
    int l = s.length();
    
    for (int i = 0; i < l; i++) {
        if (s[i] == 'I') {
            if ((i + 1 < l) && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                final = final-1;
            }
            else {
                final = final+1;
            }
        }
        else if (s[i] == 'X') {
            if ((i + 1 < l) && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                final =final- 10;
            }
            else {
                final =final+ 10;
            }
        }
        else if (s[i] == 'C') {
            if ((i + 1 < l) && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                final =final- 100;
            }
            else {
                final =final+ 100;
            }
        }
        else if (s[i] == 'V') {
            final=final+ 5;
        }
        else if (s[i] == 'L') {
            final =final+ 50;
        }
        else if (s[i] == 'D') {
            final = final+500;
        }
        else if (s[i] == 'M') {
            final = final+1000;
        }
    }
    
    return final;
    }
};