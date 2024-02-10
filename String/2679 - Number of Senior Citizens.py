class Solution(object):
    def countSeniors(self, details):
        senior = 0
        for person in details:
            if int(person[-4:-2]) > 60:
                senior += 1
        return senior
        
