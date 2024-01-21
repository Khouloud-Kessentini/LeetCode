class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        short sum=0, n = gain.size(), i;
        vector<int> vect;
        vect.push_back(0);
        for(i=0;i<n;i++){
            sum+= gain[i];
            vect.push_back(sum);
        }
        return *max_element(vect.begin(), vect.end());
    }
};
