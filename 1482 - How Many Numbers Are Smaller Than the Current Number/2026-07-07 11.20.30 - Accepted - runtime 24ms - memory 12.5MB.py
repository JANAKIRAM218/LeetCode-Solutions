class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        s_num=sorted(nums)
        disct={}
        for index,num in enumerate(sorted(nums)):
            if(num not in disct):
                disct[num]=index
        print(disct)
        res=[]
        for i in nums:
            res.append(disct[i])
        return res
        