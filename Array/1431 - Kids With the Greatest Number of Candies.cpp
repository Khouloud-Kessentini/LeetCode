class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = *max_element(candies.begin(), candies.end());
        vector<bool> vect;
        short i, n = candies.size();
        for(i=0;i<n;i++){
            if(candies[i] + extraCandies >=maximum){
                vect.push_back(true);
            }
            else{
                vect.push_back(false);
            }
        }
        return vect;
    }
};
