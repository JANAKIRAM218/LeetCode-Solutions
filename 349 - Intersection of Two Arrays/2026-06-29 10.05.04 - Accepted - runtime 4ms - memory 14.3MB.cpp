class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res_num;
        for(int i: nums1){
            if(find(nums2.begin(),nums2.end(),i)!=nums2.end()){
                res_num.insert(i);
            }
        }
        return vector<int>(res_num.begin(),res_num.end());
        
    }
};