class Solution {
public:
    int integerBreak(int n) {
        if (n < 4)
            return n - 1;
        int numOfThrees = n / 3;
        long long productOfThrees = pow(3, numOfThrees);
        if (n % 3 == 1) {
            productOfThrees /= 3;
            productOfThrees *= 4;
        } else if (n % 3 == 2) {
            productOfThrees *= 2;
        }
        return productOfThrees;
    }
};