class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int m, n = nums.size(), i;
        vector<int> vect;
        sort(nums.begin(),nums.end());
        m = n;
        m--;
        for(i=0;i<n/2+1;i++){
            vect.push_back(nums[i] + nums[i+m]);
            m-=2;
        }
        return *max_element(vect.begin(), vect.end());
    }
};
