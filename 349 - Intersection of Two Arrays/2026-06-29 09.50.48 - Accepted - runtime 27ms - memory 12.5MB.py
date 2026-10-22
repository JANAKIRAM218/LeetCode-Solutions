class Solution(object):
    def intersection(self, nums1, nums2):
        lst=[]
        for i in nums1:
            if((i in nums1) and (i in nums2) ):
                lst+=[i]
        lst=set(lst)
        return list(lst)
        