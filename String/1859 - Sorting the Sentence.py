class Solution(object):
    def sortSentence(self, s):
        words = []
        new_list = []
        new_string = ""
        words = s.split(" ")
        for word in words:
            new_list.append(word[len(word) - 1] + word[:len(word) - 1])
        new_list.sort()
        for word in new_list:
            new_string += word[1:] + " "
        return new_string[:-1]
