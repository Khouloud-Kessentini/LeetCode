class Solution {
public:
    int xorOperation(int n, int start) {
        short i;
        int sum = start;
        for(i=1; i<n; i++){
            sum ^= start + 2 * i;
        }
        return sum;
    }
};
