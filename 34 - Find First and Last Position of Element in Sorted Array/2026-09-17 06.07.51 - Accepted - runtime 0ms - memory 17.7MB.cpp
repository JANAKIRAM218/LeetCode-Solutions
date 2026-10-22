class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>num;
        int ele=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ele1=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        if(ele==nums.size() || nums[ele]!=target){
            return {-1,-1};
        }
        num.push_back(ele);
        num.push_back(ele1);
        
        return num;
    }
};