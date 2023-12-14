class Solution {
    public int arraySign(int[] nums) {
        int negative_counter=0, n=nums.length;
        while(n-- > 0){
            if(nums[n]==0){
                return 0;
            }
            else if(nums[n]<0){
                negative_counter++;
            }
        }
        return negative_counter% 2 == 0? 1 : -1;
    }
}
