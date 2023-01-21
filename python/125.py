class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if(len(s)<2):
            return True
        head = 0
        tail = len(s)-1
        s = s.lower()

        while head<tail:
            while not(s[head]>='a' and s[head] <='z' or s[head]>='A'and s[head]<='Z' or s[head]>='0'and s[head]<='9'):
                head+=1
                if(head>=len(s)):
                    return True
            while not(s[tail]>='a' and s[tail] <='z' or s[tail]>='A'and s[tail]<='Z'or s[tail]>='0'and s[tail]<='9'):
                tail-=1
            if head>=tail:
                return True
            if s[head]!=s[tail]:
                return False
            head+=1
            tail-=1
        return True

if __name__ == '__main__':
    s = "A man, a plan, a canal: Panama"
    print(Solution.isPalindrome(0,","))