class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        empty=[]
        empty+=nums1
        empty+=nums2
        sort_lst=sorted(empty) 
        length=len(sort_lst)
        if(length%2!=0):
            return float(sort_lst[length//2])
        else:
            return float((sort_lst[length//2]+sort_lst[(length//2)-1])/2.0)