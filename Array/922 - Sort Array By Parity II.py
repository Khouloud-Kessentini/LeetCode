class Solution(object):
    def sortArrayByParityII(self, nums):
        even, odd = [], []
        for num in nums:
            if num % 2 == 0:
                even.append(num)
            else:
                odd.append(num)
        nums = []
        n = len(odd)
        for i in range(n):
            nums.append(even[i])
            nums.append(odd[i])
        return nums
