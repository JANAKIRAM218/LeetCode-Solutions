class Solution(object):
    def buildArray(self, target, n):
        arr=[]
        j=0
        for i in range(1,n+1):
            if(len(target)==j):
                break
            if(target[j]==i):
                arr.append("Push")
                j+=1
            else:
                arr.append("Push")
                arr.append("Pop")
        return arr

        