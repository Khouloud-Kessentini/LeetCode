class Solution {
public:
    int countAsterisks(string s) {
        short vertb_counter = 0, asterisks = 0, i;
        int n = s.length();
        for(i=0;i<n;i++){
            if(s[i] == '|'){
                vertb_counter++;
            }
            if(vertb_counter % 2 == 0){
                if(s[i] == '*'){
                    asterisks++;
                }
            }
        }
        return asterisks;
    }
};
