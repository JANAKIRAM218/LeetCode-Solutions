class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        new_word=""
        new_list=[]
        new_num=[]
        if(len(s)<=1):
            return len(s)

        for i in s:
            if(i not in new_word):
                new_word+=i
            else:
                new_list+=[new_word]
                new_num+=[len(new_word)]
                new_word=new_word[new_word.index(i)+1:]
                new_word+=i
                
        new_num.append(len(new_word))
       
        
        return max(new_num)
                
