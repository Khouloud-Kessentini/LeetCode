class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted = heights;
        short i, sum=0;
        int n = heights.size();
        sort(heights.begin(), heights.end());
        for(i=0;i<n;i++){
            if(heights[i] != sorted[i]){
                sum++;
            }
        }
        return sum;
    }
};
