class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        short i, j, n=nums.size();
        vector<int> occurences(n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j && nums[j] < nums[i]){
                    occurences[i]++;
                }
            }
        }
        return occurences;
    }
};
