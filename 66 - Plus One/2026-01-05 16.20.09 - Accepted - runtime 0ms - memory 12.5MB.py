class Solution(object):
    def plusOne(self, digits):
        x=len(digits)-1
        total=0
        for i in digits:
            total+=i*(10**x)
            x-=1
        lst=[]
        total+=1
        while total>0:
            lst=[total%10]+lst
            total=total//10
        return lst

           
        
        