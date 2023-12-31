"""
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 

Example 1:


Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
Example 2:

Input: height = [4,2,0,3,2,5]
Output: 9
"""
class Solution:
    def trap(self, height: list[int]) -> int:
        # left_ii = 0
        # for ii in range(len(height)):
        #     if height[ii] >0 :
        #         left_ii = ii
        #         break
            
        # for ii in range(left_ii, len(height)):
        #     if height[ii] >= height[left_ii]:
        #         print(height[left_ii])
        tall_ii = 0
        second_tall_ii = -1
        area = 0
        for ii in range(len(height)):
            if height[ii] > height[tall_ii]:
                second_tall_ii = tall_ii
                tall_ii = ii
            elif height[ii] > height[second_tall_ii]:
                second_tall_ii = ii
        print(tall_ii, second_tall_ii)
        if second_tall_ii < tall_ii:
            area += height[second_tall_ii] * (tall_ii - second_tall_ii - 1) - sum(height[second_tall_ii+1:tall_ii])
        else: 
            area += height[second_tall_ii] * (second_tall_ii - tall_ii - 1) - sum(height[tall_ii+1:second_tall_ii])

        print(area)
        # print(sum(height[1:3]))

        


height = [4,1,2,3]
# height = [0,1,0,2,1,0,1,3,2,1,2,1]

Solution().trap(height)