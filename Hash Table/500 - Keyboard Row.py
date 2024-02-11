class Solution(object):
    def findWords(self, words):
        hashMap1 = {1:'q', 2:'w', 3:'e', 4:'r', 5:'t', 6:'y', 7:'u', 8:'i', 9:'o', 10:'p'}
        hashMap2 = {11:'a', 12:'s', 13:'d', 14:'f', 15:'g', 16:'h', 17:'j', 18:'k', 19:'l'}
        hashMap3 = {20:'z', 21:'x', 22:'c', 24:'v', 25:'b', 26:'n', 27:'m'}
        res = []
        for word in words:
            exists_row1, exists_row2, exists_row3 = True, True, True
            for letter in word:
                if letter.lower() not in hashMap1.values():
                    exists_row1 = False
                    break
            if exists_row1 == False:
                for letter in word:
                    if letter.lower() not in hashMap2.values():
                        exists_row2 = False
                        break
            if exists_row1 == False and exists_row2 == False:
                for letter in word:
                    if letter.lower() not in hashMap3.values():
                        exists_row3 = False
                        break
            if exists_row1 == True or exists_row2 == True or exists_row3 == True:
                res.append(word)
        return res
        
