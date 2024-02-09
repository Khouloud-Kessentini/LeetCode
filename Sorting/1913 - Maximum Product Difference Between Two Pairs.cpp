class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        short n, m;
        n = nums.size() -1;
        m = nums.size() -2;
        return nums[n] * nums[m] - nums[0] * nums[1];
    }
};
