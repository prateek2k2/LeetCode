class Solution {
public:
    bool isHappy(int n) {
        if(n==1)
        return true;
        else if(n==4)
        return false;
        else
        return isHappy(check(n));
        
    }
    int check(int s)
    {
        int d=0,sum=0;
        while(s!=0)
        {
            d=s%10;
            sum=sum+(d*d);
            s=s/10;
        }
        return sum;
    }
};