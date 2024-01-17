class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length() - 1;
        while(n > -1){
            s[n] = tolower(s[n]);
            n--;
        }
        return s;
    }
};
