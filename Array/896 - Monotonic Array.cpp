class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> sorted_asc = nums;
        bool montone_desc = true, montone_asc = true;
        int n = nums.size();
        sort(sorted_asc.begin(), sorted_asc.end());
        for(auto i=0;i<n;i++){
            if(nums[i] != sorted_asc[i]){
                montone_asc = false;
            }
        }
        for(auto i=n-1;i>=0;i--){
            if(nums[i] != sorted_asc[n-1-i]){
                montone_desc = false;
            }
        }
        if(montone_desc == true || montone_asc == true){
            return true;
        }
        else{
            return false;
        }
    }
};
