class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        d_for_s = {}
        d_for_t = {}
        if(len(s)!=len(t)):
            return False
        for ii in range(0,len(s)):
            if s[ii] in d_for_s:
                d_for_s[s[ii]]+=1
            else:
                d_for_s[s[ii]]=1
            if t[ii] in d_for_t:
                d_for_t[t[ii]]+=1
            else:
                d_for_t[t[ii]]=1
        if d_for_s == d_for_t:
            return True
        return False