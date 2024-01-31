class Solution(object):
    def lengthOfLastWord(self, s):
        m = s.split()
        return len(m[len(m)-1])
