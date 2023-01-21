class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        left = 0
        right = len(nums) -1
        
        while(left <=right):
            mid = (left +right )//2
            if(nums[mid] == target):
                return mid
            elif(nums[mid]>target):
                right = mid-1
            else:
                left = mid+1
            print('left' + str(left) + ' right' + str(right))
        return -1
nums = [1,2,4,5]
print(Solution.search(0,nums,3))