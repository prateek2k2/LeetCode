class Solution {
public:
    string reverseWords(string s) {
    int n = s.size();
    stack<string> st;
    string tmp = "";
    for(int i=0; i<n; i++) {
        if(s[i] != ' ')
            tmp.push_back(s[i]);    
        if((i == n-1 || s[i] == ' ') && !tmp.empty())
            st.push(tmp), tmp = "";
    }
    while(!st.empty()) {
        tmp.append(st.top()); 
        st.pop();
        tmp.push_back(' ');
    }
    tmp.pop_back();
    
    return tmp;
}
};