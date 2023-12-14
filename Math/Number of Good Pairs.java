class Solution {
    public int numIdenticalPairs(int[] nums) {
        short i, j;
        int sum=0, n=nums.length;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(nums[i]==nums[j] && i<j){
                    sum++;
                }
            }
        }
        return sum;
    }
}
