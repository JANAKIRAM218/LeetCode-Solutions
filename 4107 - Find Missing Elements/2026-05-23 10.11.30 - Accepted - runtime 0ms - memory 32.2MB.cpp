class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> empty;
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>maximum){
                maximum=nums[i];
            }
            if(nums[i]<minimum){
                minimum=nums[i];
            }
        }
        for (int i=minimum+1;i<=maximum-1;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                empty.push_back(i);
            }
        }
        return empty;
    }
};