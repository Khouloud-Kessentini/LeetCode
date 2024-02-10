class Solution(object):
    def findDifference(self, nums1, nums2):
        dist1, dist2 = [], []
        for num in nums1:
            if num not in dist1 and num not in nums2:
                dist1.append(num)
        for num in nums2:
            if num not in dist2 and num not in nums1:
                dist2.append(num)
        return [dist1, dist2]
