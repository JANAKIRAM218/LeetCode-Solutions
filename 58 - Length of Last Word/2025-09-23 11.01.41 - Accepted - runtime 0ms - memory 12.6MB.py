class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        x=s.split(" ")
        for i in x[::-1]:
            if(i!=""):
                lx=len(i)
                return lx