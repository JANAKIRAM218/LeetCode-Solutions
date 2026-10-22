class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int > vec1;
        vector<int> vec2;
        for(int i:s1){
            if(s2.find(i)==s2.end()){
               vec1.push_back(i);
            }
        }
        cout<<endl;
        for(int j:s2){
            if(s1.find(j)==s1.end()){
                vec2.push_back(j);
            }
        }
        return {vec1,vec2};
    }
};