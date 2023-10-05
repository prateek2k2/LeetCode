class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        int k;
        int count=0;
        for(int i=0;i<n+1;i++){
            k=i;
            while(k!=0){
                if(k%2==1)
                    count++;
                k/=2;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
    }
};