class Solution {
public:
    unordered_map<int,int> mp;
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i:nums){
            mp[i]++;
            if(mp[i]>n/2) return i;
        }
        return -1;
    }
};