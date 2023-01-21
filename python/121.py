class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if len(prices) <2:
            return 0
        print('here')
        left = 0
        right = 0
        pro = 0
        while right!= len(prices):     
            if prices[right]<prices[left]:
                left = right
            if prices[right] - prices[left]>pro:
                print("pro= "+str(pro)+'left'+str(left)+'right'+str(right))
                pro = prices[right] - prices[left]
            right+=1
        return pro

if __name__=="__main__":
    list1 = [7,1,5,3,6,4]
    list2 = [3,2,1]
    list3 = [2,4,1]
    val = Solution.maxProfit(0,list1)
    print(val)