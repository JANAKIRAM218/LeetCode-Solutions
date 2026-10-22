class Solution(object):
    def isPalindrome(self, x):
        new=str(x)
        return new[::-1]==new
        