class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        short n = nums.size() -1, i, j;
        vector<int> vect;
        for(i=0;i<n;i+=2){
            for(j=0;j<nums[i];j++){
                vect.push_back(nums[i+1]);
            }
        }
        return vect;
    }
};
