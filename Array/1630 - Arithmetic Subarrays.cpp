class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        short n = l.size(), i, j, k, diff, m;
        bool arithmetic;
        vector<bool> res;

        for(i=0;i<n;i++){
            vector<int> vect;
            arithmetic = true;
            for(j=l[i];j<=r[i];j++){
                vect.push_back(nums[j]);
            }

            sort(vect.begin(), vect.end());
            m = vect.size() - 1;
            diff = vect[0] - vect[1];
            for(k=1;k<m;k++){
                if((vect[k] - vect[k+1]) != diff){
                    arithmetic = false;
                    break;
                }
            }
            arithmetic == true? res.push_back(true): res.push_back(false);
        }
        return res;
    }
};
