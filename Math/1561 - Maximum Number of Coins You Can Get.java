class Solution {
    public int maxCoins(int[] piles) {
        Arrays.sort(piles);
        int i, len, score = 0, bob_part;
        len = piles.length;
        bob_part = len / 3;
        for(i=len-2;i>=bob_part;i-=2){
            score += piles[i];
        }
        return score;
    }
}
