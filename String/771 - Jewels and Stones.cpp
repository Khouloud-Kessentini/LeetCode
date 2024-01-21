class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m = jewels.length(), n = stones.length();
        short i, j, sum=0;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(stones[i] == jewels[j]){
                        sum++;
                        break;
                    }
                }
            }
        return sum;
    }
};
