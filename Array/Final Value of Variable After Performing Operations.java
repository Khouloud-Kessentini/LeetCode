class Solution {
    public int finalValueAfterOperations(String[] operations) {
        short i, x=0;
        int n=operations.length;
        for(i=0; i<n; i++){
            if(operations[i].charAt(1) == '+'){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
}
