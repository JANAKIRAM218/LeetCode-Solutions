class Solution(object):
    def sumFourDivisors(self, nums):
        summ=0
        for i in nums:
            lst=[]
            for j in range(1,int(i**0.5)+1):
                if(i%j==0):
                    lst.append(j)
                    if(i/j not in lst):
                        lst.append(i/j)
            if(len(lst)==4):
                summ+=sum(lst)
        return summ