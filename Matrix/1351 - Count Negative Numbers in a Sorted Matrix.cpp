class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size() -1, m = grid[0].size() -1, i, sum=0;
        while(n>-1 && m>-1 && grid[n][m]<0){
            i = m;
            while(i>-1 && grid[n][i]<0){
                sum++;
                i--;
            }
            n--;
        }
        return sum;
    }
};
