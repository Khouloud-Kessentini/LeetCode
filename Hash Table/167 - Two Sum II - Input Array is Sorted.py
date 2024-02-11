class Solution(object):
    def twoSum(self, numbers, target):
        hashMap = {}
        for i, n in enumerate(numbers):
            diff = target - n
            if diff in hashMap:
                return [hashMap[diff]+1, i+1]
            hashMap[n] = i
        return
