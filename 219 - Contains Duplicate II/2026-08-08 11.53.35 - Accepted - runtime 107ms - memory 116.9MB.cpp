class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set_x;
        for (int i=0;i<nums.size();i++){
            if(set_x.count(nums[i])>=1){
                return true;
            }

            set_x.insert(nums[i]);

            if(set_x.size()>k){
                set_x.erase(nums[i-k]);
            }
        }
        return false;
    }
};