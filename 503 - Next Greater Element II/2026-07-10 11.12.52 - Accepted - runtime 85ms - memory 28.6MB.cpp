class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
        for (int i=0;i<nums.size();i++){
            bool check=true;
            for (int j=i;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    res.push_back(nums[j]);
                    check=false;
                    break;
                }


            }
            if(check){
                for (int k=0;k<i;k++){
                    if(nums[k]>nums[i]){
                        res.push_back(nums[k]);
                        check=false;
                        break;
                    }
                }
            }

            if(check){
                res.push_back(-1);
            }
        }
        return res;
    }
};