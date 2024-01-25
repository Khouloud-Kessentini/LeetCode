class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size() - 1, i;
        vector<int> original;
        original.push_back(pref[0]);
        for(i=0;i<n;i++){
            original.push_back(pref[i] ^ pref[i+1]);
        }
        return original;
    }
};
