class Solution(object):
    def repeatedStringMatch(self, a, b):
        count=(len(b)+len(a)-1) // len(a)
        full=count * a
        if(b in full):
            return count 

        if( b in full +a):
            return count+1
        return -1      