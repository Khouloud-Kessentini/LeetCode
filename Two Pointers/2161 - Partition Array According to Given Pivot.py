class Solution(object):
    def pivotArray(self, nums, pivot):
        new_list = []
        after_pivot = []
        pivots = []
        for num in nums:
            if num < pivot:
                new_list.append(num)
            if num > pivot:
                after_pivot.append(num)
            if num == pivot:
                pivots.append(pivot)
        new_list += pivots
        new_list += after_pivot
        return new_list      
