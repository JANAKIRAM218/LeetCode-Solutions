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
            if all(c not in broken for c in word):
                count+=1 
            
        return count
