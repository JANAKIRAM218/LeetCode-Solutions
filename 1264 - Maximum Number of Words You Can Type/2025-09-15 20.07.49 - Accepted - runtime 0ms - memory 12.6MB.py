class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        """
        :type text: str
        :type brokenLetters: str
        :rtype: int
        """

        words=text.split()
        broken=set(list(brokenLetters))
        count=0

        for word in words:
            bool=True
            for i in word:
                if(i in broken):
                    bool=False
                    break
            if bool:
                count+=1

        return count
