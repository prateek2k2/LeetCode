class Solution {
public:
    bool isUgly(int n) {
        int c=0;
        if(n==1)
        return true;
        if(n==0)
        return false;
        if(n<0)
        return 0;
        while(n>=0)
        {
            if(n==1)
            return true;
            else if(n%2==0)
            n=n/2;
            else if(n%3==0)
            n=n/3;
            else if(n%5==0)
            n=n/5;
            else 
            return false;
        }
        return true;
        
    }
};