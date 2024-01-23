class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n = words.size(), m = s.length(), i;
        bool b = true;

        if(n != m){
            return false;
        }
        
        for(i=0; i<n; i++){
            if(words[i][0] != s[i]){
                b = false;
                break;
            }
        }
        return b;
    }
};
