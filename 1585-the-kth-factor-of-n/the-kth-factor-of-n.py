class Solution(object):
    def kthFactor(self, n, k):
        empty=[]
        for i in range(1,int(n**0.5)+1):
            if(n%i==0):
                empty.append(i)
                if(n//i!=i):
                    empty.append(n//i)
        empty=sorted(empty)
        if(len(empty)>=k):
            return empty[k-1]
        return -1
        