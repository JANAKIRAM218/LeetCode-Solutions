class Solution(object):
    def removeOuterParentheses(self, s):
        ans=""
        count=0
        for i in s:
            if(i=="("):
                if(count>0):
                    ans+=i
                count+=1
            
            else:
                if(count>1):
                    ans+=i
                count-=1
        return ans


        