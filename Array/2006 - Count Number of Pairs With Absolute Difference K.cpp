class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        short counter=0, n = nums.size();
        for(auto i=0;i<n;i++){
            for(auto j=i;j<n;j++){
                if(abs(nums[i] - nums[j]) == k){
                    counter++;
                }
            }
        }
        return counter;
    }
};
