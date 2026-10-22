class Solution(object):
    def secondsBetweenTimes(self, startTime, endTime):
        st=startTime.split(":")
        et=endTime.split(":")
        hr=(int(et[0])-int(st[0]))*60*60
        mins=(int(et[1])-int(st[1]))*60
        sec=int(et[2])-int(st[2])

       
        
        return hr+mins+sec
        
        