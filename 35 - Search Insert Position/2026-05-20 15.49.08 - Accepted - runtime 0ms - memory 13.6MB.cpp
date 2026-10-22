class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size()-1;
        int high=n;
        int position=-1;
        int mid;
       
        if(nums[0]>=target) return 0;
        if(nums[n]<target) return n+1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]< target){
                position=mid+1;
                low=mid+1;
                
                
            }else if(nums[mid]==target){
               position=mid;
               low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return position;
    }
};