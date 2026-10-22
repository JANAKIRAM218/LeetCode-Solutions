class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        counting=0
        for i in set(nums):
            counting=max(counting,nums.count(i))        
        sum=0
        for i in set(nums):
            if(nums.count(i)==counting):
                sum+=nums.count(i)
        return sum