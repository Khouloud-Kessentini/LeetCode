class Solution(object):
    def prefixCount(self, words, pref):
        n = len(pref)
        counter = 0
        for word in words:
            if word[:n] == pref:
                counter += 1
        return counter
        
