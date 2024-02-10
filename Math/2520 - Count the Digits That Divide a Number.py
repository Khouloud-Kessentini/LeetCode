class Solution(object):
    def countDigits(self, num):
        div = 0
        s_num = str(num)
        for character in s_num:
            if num % int(character) == 0:
                div +=1
        return div
        
