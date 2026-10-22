class Solution(object):
    def rearrangeString(self, s, x, y):
        """
        :type s: str
        :type x: str
        :type y: str
        :rtype: str
        """

        ans=[]
        for i in s:
            if i !=x:

                ans.append(i)

        for i in s:
            if i==x:
                ans.append(i)


        return "".join(ans)
        