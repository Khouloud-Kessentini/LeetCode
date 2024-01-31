class Solution(object):
    def checkIfPangram(self, sentence):
        alphabet_lowercase = list(string.ascii_lowercase)
        n, m = len(sentence), len(alphabet_lowercase)
        for i in range(n):
            for j in range(m):
                if(alphabet_lowercase[j] == sentence[i]):
                    alphabet_lowercase[j] = -1
        
        b = True
        for j in range(m):
            if(alphabet_lowercase[j] != -1):
                b = False
                break
        
        return b

        
