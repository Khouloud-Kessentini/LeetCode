class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        short n = nums.size(), triplets = 0, i, j, k;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                for(k=0;k<n;k++){
                    if(i != j && j != k){
                        if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff){
                            triplets++;
                        }
                    }
                }
            }
        }
        return triplets;
    }
};
