class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> sums;
        short i, n = nums.size();
        for(i=0;i<n;i++){
            sum+= nums[i];
            sums.push_back(sum);
        }
        return sums;
    }
};
