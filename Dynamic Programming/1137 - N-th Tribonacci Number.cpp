class Solution {
public:
    int tribonacci(int n) {
        vector<int> t = {0, 1, 1};
        int i, temp0, temp1;
        if(n<3){
            return t[n];
        }
        else{
            for(i=3;i<n+1;i++){
                temp0 = t[0];
                temp1 = t[1];
                t[0] = t[1];
                t[1] = t[2];
                t[2] = temp0 + temp1 + t[2];
            }
        }
        return t[2];
    }
};
