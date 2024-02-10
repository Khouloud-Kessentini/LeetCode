class Solution(object):
    def flipAndInvertImage(self, image):
        n = len(image)
        m = len(image[0])
        for i in range(n):
            image[i].reverse()
        for i in range(n):
            for j in range(m):
                if image[i][j] == 1:
                    image[i][j] = 0
                else:
                    image[i][j] = 1
        return image
