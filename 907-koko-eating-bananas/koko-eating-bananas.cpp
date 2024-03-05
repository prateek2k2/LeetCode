class Solution {
public:
long long totalHours(vector<int> &v, int hourly) {
    long long totalH = 0;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        totalH += ceil((long double)(v[i]) / (long double)(hourly));
    }
    return totalH;
}
int minEatingSpeed(vector<int>& piles, int h) {
        long long max=*max_element(piles.begin(), piles.end());
        long long low = 1, high = max;
        while (low <= high) {
            long long mid = (low + high) / 2;
            long long totalH = totalHours(piles, mid);
            if (totalH <= h) {
                high = mid - 1;
            }
            else 
            {
            low = mid + 1;
            }
    }
    return low;
        
    }
};