class Solution {
public:
    int mod=1e9+7;
    int binExpo(long long x,long long n){
        int ans=1;
        while(n){
            if(n&1){
                ans=(ans*x)%mod;
            }
            x=(x*x)%mod;
            n>>=1;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long even=n/2+n%2,odd=n/2;
        int even_val=binExpo(5,even);
        int odd_val=binExpo(4,odd);
        return (1ll*even_val*odd_val)%mod;

        
    }
};