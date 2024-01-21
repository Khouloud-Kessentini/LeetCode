class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        short n = sentences.size(), words, i, j, max_sequence = -1;
        int m;
        vector<int> nb_words;
        for(i=0;i<n;i++){
            words = 1;
            m = sentences[i].length();
            for(j=0;j<m;j++){
                if(sentences[i][j] == ' '){
                    words++;
                }
            }
            if(words > max_sequence){
                max_sequence = words;
            }
        }
        return max_sequence;
    }
};
