class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        vector<int> ans_arr;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans_arr.push_back(matrix[i][j]);
            }
        }
        sort(ans_arr.begin(),ans_arr.end());
        return ans_arr[k-1];

    }
};