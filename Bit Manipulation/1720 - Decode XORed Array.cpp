class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int i, n=encoded.size();
        vector<int> arr;
        arr.push_back(first);
        for(i=0;i<n;i++){
            arr.push_back(encoded[i]^arr[i]);
        }
        return arr;
    }
};
