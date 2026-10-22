class Solution(object):
    def minAdjacentSwaps(self, nums, a, b):
        left = 0
        middle = 0
        swaps = 0

        for x in nums[::-1]:
            if x < a:
                left += 1
            elif x <= b:
                swaps += left
                middle += 1
            else:
                swaps += left + middle

        return swaps%(10**9 + 7)
                
        