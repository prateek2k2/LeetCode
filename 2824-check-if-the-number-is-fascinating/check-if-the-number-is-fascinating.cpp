class Solution {
public:
    bool isFascinating(int n)
{
    string newstr = to_string(n);
    string p = newstr + to_string(2 * n) + to_string(3 * n);
    if (p.length() != 9)
    {
        return false;
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < 9; i++)
    {
        if (p[i] != '1' + i)
        {
            return false;
        }
    }
    return true;
}
};