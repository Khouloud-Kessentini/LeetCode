class Solution(object):
    def isAnagram(self, s, t):
        s = [char for char in s]
        t = [char for char in t]
        s.sort()
        t.sort()
        return s == t
