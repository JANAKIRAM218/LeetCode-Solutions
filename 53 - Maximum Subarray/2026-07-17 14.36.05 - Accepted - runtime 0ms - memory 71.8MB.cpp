class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_ans=INT_MIN;
        int curr_sum=0;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            max_ans=max(curr_sum,max_ans);
            if(curr_sum<0){
                curr_sum=0;
            }

        }
        return max_ans;
    }
};