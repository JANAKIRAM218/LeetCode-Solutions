class Solution {
public:
    bool check(vector<int>& nums,int divisor, int threshold){
        int sum=0;
        for(int i:nums){
            sum+=(i+divisor-1)/divisor;
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=0;
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
      
      
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(nums,mid,threshold)){
                ans=mid;
                right=mid-1;

            }
            else{
                left=mid+1;  
            }
        }
        return ans;
    }
};