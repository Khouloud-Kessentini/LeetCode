class Solution(object):
    def isStrictlyPalindromic(self, n):
        n = str(bin(n))
        m = len(n)
        p = m - 1
        palindromic = True
        for i in range(m/2):
            if n[i] != n[i+p]:
                palindromic = False
            p -=2
        return palindromic
