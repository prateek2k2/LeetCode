class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) {
            return 1;
        } else {
            int st[n + 1];
            st[0] = 1;
            st[1] = 1;
            for (int i = 2; i <= n; i++) {
                st[i] = st[i - 2] + st[i - 1];
            }
            return st[n];
        }
    }
};