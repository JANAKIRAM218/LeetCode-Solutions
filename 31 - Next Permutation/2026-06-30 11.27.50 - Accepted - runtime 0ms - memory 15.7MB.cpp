class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size=nums.size();
        int idx=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                idx=i-1;
                break;
               
            }
           
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
        sort(nums.begin()+idx+1,nums.end());
        
    }
};