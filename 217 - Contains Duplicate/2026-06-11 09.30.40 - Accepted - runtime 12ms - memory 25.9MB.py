class Solution(object):
    def containsDuplicate(self, nums):
        set_nums=set(nums)
        
        return len(nums)!=len(set_nums)
        