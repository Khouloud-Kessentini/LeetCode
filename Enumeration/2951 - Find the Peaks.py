class Solution(object):
    def findPeaks(self, mountain):
        n = len(mountain) - 1
        peaks = []
        for i in range(1, n):
            if mountain[i] > mountain[i-1] and mountain[i] > mountain[i+1]:
                peaks.append(i)
        return peaks
        
