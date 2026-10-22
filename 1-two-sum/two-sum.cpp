class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>unmp;
        for(int i=0;i<nums.size();i++){
            int res=target-nums[i];
            if(unmp.find(res)!=unmp.end()){
                return {i,unmp[res]};
            }
            unmp[nums[i]]=i;
        }
        return {};
    }
};