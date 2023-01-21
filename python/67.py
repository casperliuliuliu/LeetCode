class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        ans =''
        c = int(a) + int(b)
        ans = str(c)[::-1]
        while('2' in ans or '3' in ans):
            if('2' in ans):
                c = c- 2*pow(10,ans.index('2')) + pow(10,ans.index('2')+1)
                ans = str(c)[::-1]
            else:
                c = c- 2*pow(10,ans.index('3')) + pow(10,ans.index('3')+1)
                ans = str(c)[::-1]
            print(c)
            print(ans)
        return ans[::-1]
print(Solution.addBinary(0,1011,111))