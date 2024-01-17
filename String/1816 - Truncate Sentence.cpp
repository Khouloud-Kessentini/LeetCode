class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0, n = s.length(), words_counter=0;
        string new_string = "";
        while(words_counter < k && i<n){
            if(s[i] == ' '){
                words_counter++;
            }
            if(words_counter < k){
                new_string+= s[i];
            }
            i++;
        }
        return new_string;
    }
};
