class Solution(object):
    def floodFill(self, image, sr, sc, color):
        """
        :type image: List[List[int]]
        :type sr: int
        :type sc: int
        :type color: int
        :rtype: List[List[int]]
        """
        print(image)
        target = image[sr][sc]
        if(target == color):
            return image
        return Solution().dfs(image, sr, sc, color,target)

    def dfs(trash,image, sr, sc, color,target):
        if(sr>=len(image) or sr<0 or sc >=len(image[sr]) or sc<0):
            return
        if image[sr][sc] == target:
            image[sr][sc] =color
        else:
            return
        Solution().dfs(image, sr+1, sc, color,target)
        Solution().dfs(image, sr, sc+1, color,target)
        Solution().dfs(image, sr-1, sc, color,target)
        Solution().dfs(image, sr, sc-1, color,target)
        return image

image = [[1,1,1],[1,1,0],[1,0,1]]
sr = 1
sc = 1
color = 2

tem = Solution.floodFill(0,image,sr,sc,color)
print(tem)