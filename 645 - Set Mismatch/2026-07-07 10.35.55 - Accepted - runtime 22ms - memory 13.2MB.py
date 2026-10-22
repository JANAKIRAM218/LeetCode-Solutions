class Solution(object):
    def findErrorNums(self, nums):
        dup=-1
        for i in nums:
            inx=abs(i)-1
            if(nums[inx]<0):
                dup=abs(i)
            else:
                nums[inx]*=-1  
        print(dup) 

        missing=-1
        for i in range(len(nums)):
            if(nums[i]>0):
                missing=i+1
        print(missing)


        return [dup,missing]