class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        short n = nums.size(), i;
        for(i=0;i<n;i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
