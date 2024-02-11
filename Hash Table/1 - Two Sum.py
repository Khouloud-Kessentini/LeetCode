class Solution(object):
    def twoSum(self, nums, target):
        hashMap = {}
        for i, n in enumerate(nums):
            difference = target - n
            if difference in hashMap:
                return [hashMap[difference], i]
            hashMap[n] =i
        return
        
