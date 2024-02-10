class Solution(object):
    def countConsistentStrings(self, allowed, words):
        cons = [character for character in allowed]
        not_allowed = 0
        for word in words:
            for letter in word:
                if letter not in cons:
                    not_allowed += 1
                    break
        return len(words) - not_allowed
        
