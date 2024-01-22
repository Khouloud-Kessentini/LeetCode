class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        int sum = 0, product = 1, m = s.length(), i;
        for(i=0;i<m;i++){
            sum += s[i] - '0';
            product*= s[i] - '0';
        }
        return product - sum;
    }
};
