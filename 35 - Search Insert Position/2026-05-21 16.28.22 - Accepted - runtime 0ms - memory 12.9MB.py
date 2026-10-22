class Solution(object):
    def searchInsert(self, nums, target):
        low=0
        high=len(nums)-1
        position=0
        while(low<=high):
            mid=(low+high)/2
            if(nums[mid]==target):
                position=mid
                high=mid-1
            elif (nums[mid]<target):
                position=mid+1
                low=mid+1
            else:
                high=mid-1
        return position