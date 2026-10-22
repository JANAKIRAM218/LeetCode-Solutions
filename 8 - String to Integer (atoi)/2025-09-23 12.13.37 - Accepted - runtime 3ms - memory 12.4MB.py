class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        min_int=-2**31
        max_int=2**31 - 1
        s=s.strip()
        sign=1 
        if(s.startswith("-")):
            sign=-1
            s=s[1:]
            
        elif(s.startswith("+")):
            sign=1
            s=s[1:]
           
        
        
        number="0"
        for i in s:
            if(i.isdigit()):
                number+=i 
            
            else:
                break

        final_num=int(number)*sign
        
        if(final_num<min_int):
            return min_int
        elif (final_num>max_int):
            return max_int
        else:
            return final_num

        