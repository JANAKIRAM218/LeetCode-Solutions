class Solution(object):
    def maxFreqSum(self, s):
        dict_vowels={}
        dict_consonant={}
        list_vowels=["a","e","i","o","u"]
        for i in s:
            if(i in list_vowels):
                if(i in dict_vowels):
                    dict_vowels[i]+=1
                else:
                    dict_vowels[i]=1
            else:
                if(i in dict_consonant):
                   dict_consonant[i]+=1
                else:
                    dict_consonant[i]=1
                
        const_count=list(dict_consonant.values())
        max_conso=0

        if(const_count):
            max_conso=max(const_count)
        else:
            max_conso=0

        vowo_count=list(dict_vowels.values())
        max_vowo=0

        if(vowo_count):
            max_vowo=max(vowo_count)
        else:
            max_vowo=0


        return max_vowo+max_conso
        