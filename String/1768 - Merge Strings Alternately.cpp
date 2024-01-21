class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        short n = word1.length(), m = word2.length(), x1 = min(n,m), x2 = max(n,m), i;
        string new_word = "";
        for(i=0;i<x1;i++){
            new_word += word1[i];
            new_word += word2[i];
        }
        cout << new_word;
        if(n>m){
            for(i=x1;i<x2;i++){
                new_word += word1[i];
            }
        }
        if(n<m){
            for(i=x1;i<x2;i++){
                new_word += word2[i];
            }
        }
        return new_word;
    }
};
