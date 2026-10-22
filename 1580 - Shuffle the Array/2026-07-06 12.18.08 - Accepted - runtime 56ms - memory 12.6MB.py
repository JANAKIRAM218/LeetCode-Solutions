class Solution(object):
    def shuffle(self, nums, n):
        nums1=nums[:len(nums)/2]
        nums2=nums[len(nums)/2:]
        print(nums1)
        print(nums2)
        new=[]
        for i in range(len(nums1)):
            new.append(nums1[i])
            new.append(nums2[i])
        return new
        