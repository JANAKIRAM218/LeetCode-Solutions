class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int pre=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=pre;
            pre*=nums[i];
        }
        int suf=1;

        for(int j=nums.size()-1;j>-1;j--){
            ans[j]*=suf;
            suf*=nums[j];
        }
       
        return ans;
    }
};