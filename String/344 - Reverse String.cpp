class Solution {
public:
    void reverseString(vector<char>& s) {
        int i, n = s.size();
        char aux;
        short middle = n/2;  
        n--; 
        for(i=0; i<middle; i++){
            aux = s[i];
            s[i] = s[n];
            s[n] = aux;
            n--;
        }
    }
};
