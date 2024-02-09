class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        index = -1
        m = len(searchWord)
        sentence = sentence.split(" ")
        n = len(sentence)
        for i in range(n):
            if len(sentence[i]) >= m:
                if sentence[i][:m] == searchWord:
                    index = i+1
                    break
        return index
