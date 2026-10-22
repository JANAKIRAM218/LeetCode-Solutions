class Solution(object):
    def vowelcount(self,s):
        vowels = 'aeiou'
        if s[0] in vowels and s[-1] in vowels:
            return 1
        return 0
    def vowelStrings(self, words, queries):
        arr=[0]
        for i in words:
            arr.append( arr[-1] + self.vowelcount(i))
        lst=[]
        for i in queries:
            start=i[0]
            end=i[-1]+1
            x=(arr[end]-arr[start])
            lst.append(x)
        return lst
        
            
        