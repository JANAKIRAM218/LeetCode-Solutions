class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        counting=0
        for i in nums:
            if(nums.count(i)>=counting):
                counting=nums.count(i)
                
        sum=0
        for i in nums:
            if(nums.count(i)==counting):
                sum+=1
        return sum