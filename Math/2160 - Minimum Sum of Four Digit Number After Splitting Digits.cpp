class Solution {
public:
    int minimumSum(int num) {
        vector<int> vect;
        vect.push_back(num/1000);
        vect.push_back(num%1000/100);
        vect.push_back(num%1000%100/10);
        vect.push_back(num%1000%100%10);
        sort(vect.begin(), vect.end());
        return vect[0]*10 + vect[3] + vect[1]*10 + vect[2];
    }
};
