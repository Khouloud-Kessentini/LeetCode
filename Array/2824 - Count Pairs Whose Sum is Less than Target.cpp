class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        short i, n = nums.size(), j, sum = 0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i != j && nums[i]+nums[j] < target){
                    sum++;
                }
            }
        }
        return sum/2;
    }
};
