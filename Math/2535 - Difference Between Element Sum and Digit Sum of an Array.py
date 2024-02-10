class Solution(object):
    def differenceOfSum(self, nums):
        elem_sum, digit_sum = 0, 0
        for elem in nums:
            for digit in str(elem):
                digit_sum += int(digit)
        for elem in nums:
            elem_sum += elem
        return elem_sum - digit_sum 
