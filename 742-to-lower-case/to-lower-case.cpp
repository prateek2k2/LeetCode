class Solution {
public:
    string toLowerCase(string s) {
    for(char& c : s)
    {
        c=tolower(c);
    }

    return s;

    //    transform(s.begin(), s.end(), s.begin(), ::tolower);

}
        
};