class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp;
        stack<int> stk;
        for(int i=nums2.size()-1;i>=0;i--){
            int num=nums2[i];
            while(!stk.empty() && num >= stk.top()){
                stk.pop();
            }
            if(!stk.empty()){
                mp[num]=stk.top();
            }
            else{
                mp[num]=-1;
            }
            stk.push(num);
           
        } 

        for(int num:nums1){
            ans.push_back(mp[num]);
        }
        return ans;

    }
};