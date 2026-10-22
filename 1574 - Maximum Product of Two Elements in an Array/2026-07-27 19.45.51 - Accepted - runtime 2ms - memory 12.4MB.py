class Solution(object):
    def maxProduct(self, nums):
        x=sorted(nums)
        ans=1
        ans=(x[-1]-1)*(x[-2]-1)
        return ans
        