class Solution(object):
    def mostWordsFound(self, sentences):
        max_ans=0
        for i in sentences:
            c=i.split()
            max_ans=max(len(c),max_ans)

        return max_ans
        