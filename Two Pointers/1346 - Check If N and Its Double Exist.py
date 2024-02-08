class Solution(object):
    def checkIfExist(self, arr):
        b = False
        for i in range(len(arr)):
            for j in range(len(arr)):
                if i != j and arr[i] == 2 * arr[j]:
                    b = True
        return b
        
