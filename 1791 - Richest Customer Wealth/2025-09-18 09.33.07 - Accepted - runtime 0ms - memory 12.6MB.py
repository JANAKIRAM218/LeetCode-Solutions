class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        maximum=0
        for i in accounts:
            add_b=0
            for j in i:
                add_b+=j
            if maximum<add_b:
                maximum=add_b

           

        return maximum