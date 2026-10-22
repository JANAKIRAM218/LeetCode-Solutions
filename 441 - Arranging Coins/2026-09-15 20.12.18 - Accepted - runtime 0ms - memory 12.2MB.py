class Solution(object):
    def arrangeCoins(self, n):
        left=0
        right=n
        ans=-1
        while(left<=right):
            mid=left+(right-left)//2 
            if(mid*(mid+1)/2 <=n):
                ans=mid
                left=mid+1 
            else:
                right=mid-1

        return ans
