class Solution(object):
    def flipAndInvertImage(self, image):
        lst=[]
        for i in image:
            x=i[::-1]
            for j in range(0,len(x)):
                if ( x[j] ==1 ):
                    x[j]=0
                else:
                    x[j]=1
            lst.append(x)
        
        return lst
    
        