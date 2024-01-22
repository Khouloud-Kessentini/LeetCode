class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max, i, n = points.size();
        vector<int> vect;
        for(i=0;i<n;i++){
            vect.push_back(points[i][0]);
        }
        sort(vect.begin(), vect.end());
        max=-1;
        n--;
        for(i=0;i<n;i++){
            if((vect[i+1] - vect[i])>max){
                max = vect[i+1] - vect[i];
            }
        }
        return max;
    }
};
