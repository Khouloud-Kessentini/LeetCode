class Solution(object):
    def findMaxK(self, nums):
        hashMap = {}
        for i, n in enumerate(nums):
            hashMap[n] = i
        hashMap = sorted(hashMap)
        for n in hashMap:
            if -n in hashMap:
                return -n
        return -1
