class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        short n = mat.size(), m = mat[0].size(), i, j, row_sum, max_val = -1, index;
        vector<short> occ;
        for(i=0;i<n;i++){
            row_sum = 0;
            for(j=0;j<m;j++){
                if(mat[i][j] == 1){
                    row_sum++;
                }
            }
            occ.push_back(row_sum);
        }
        for(i=0;i<n;i++){
            if(occ[i] > max_val){
                max_val = occ[i];
                index = i;
                
            }
        }
        return {index, max_val};
    }
};
