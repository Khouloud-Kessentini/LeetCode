class Solution(object):
    def findDuplicates(self, nums):
        hashMap = {}
        duplicates = []
        for i, n in enumerate(nums):
            if n not in hashMap:
                hashMap[n] = i
            else:
                duplicates.append(n)
        return duplicates
