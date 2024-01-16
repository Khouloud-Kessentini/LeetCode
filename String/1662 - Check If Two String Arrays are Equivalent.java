class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        int len_word1 = word1.length, len_word2 = word2.length,i;
        String new_word1="", new_word2="";
        for(i=0;i<len_word1;i++){
            new_word1+=word1[i];
        }
        for(i=0;i<len_word2;i++){
            new_word2+=word2[i];
        }
        return new_word1.equals(new_word2);
    }
}
