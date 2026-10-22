class Solution(object):
    def findKthPositive(self, arr, k):
        l=0
        h=len(arr)
        while l<h:
            m=(l+h)//2
            mis=arr[m]-m-1

            if mis<k:
                l=m+1 
            else:
                h=m

        return l+k