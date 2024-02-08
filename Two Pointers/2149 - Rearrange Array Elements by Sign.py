class Solution(object):
    def rearrangeArray(self, nums):
        positive, negative, new_nums = [], [], []
        for num in  nums:
            if num > 0:
                positive.append(num)
            else:
                negative.append(num)
        for nump, numn in zip(positive, negative):
            new_nums.append(nump)
            new_nums.append(numn)
        return new_nums
