class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> p(nums.size());
        vector<int>s(nums.size());
        p[0]=nums[0];
        int i;
        for(i=1;i<nums.size();i++){
            p[i]=nums[i]+p[i-1];
        }
        s[nums.size()-1]=nums[nums.size()-1];
        for(i=nums.size()-2;i>=0;i--){
            s[i]=nums[i]+s[i+1];
        }
        for(i=0;i<nums.size();i++){
            if(s[i]==p[i]){
                return i;
            }
        }
        return -1;
        

    }
};