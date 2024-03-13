class Solution {
public:
    int pivotInteger(int n) {
        int sum1 = 0, sum2 = 0;
        vector<int> sum;
        
        // for (int i = 1; i <= n; i++) {
        //     sum1 += i;
        //     sum.push_back(sum1);
        // }
        
        for (int j = n; j > 0; j--) {
            sum2 += j;
            // if (find(sum.begin(), sum.end(), sum2) != sum.end())
            //     return j;
            if(sum2== (j*(j+1)/2) )
                return j;
        }
        return -1;


        // int sum1=0,sum2=0;
        // int lptr=1,rptr=n;
        // while(lptr<rptr){

        // }
    }
};
