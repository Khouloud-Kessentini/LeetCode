class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        short n = nums.size() - 1, i, aux;
        sort(nums.begin(), nums.end());
        for(i=0;i<n;i+=2){
            aux = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = aux;
        }
        return nums;
    }
};
