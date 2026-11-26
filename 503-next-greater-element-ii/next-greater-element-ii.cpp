class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        nums.insert(nums.end(),nums.begin(),nums.end());
        stack<int> stk;
        for(int i=nums.size()-1;i>=0;i--){
            while(!stk.empty() && stk.top()<=nums[i]){
                stk.pop();
            }
            if(!stk.empty()){
                ans.push_back(stk.top());
            }
            else{
                ans.push_back(-1);
            }
            stk.push(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        vector<int> sub(ans.begin(),ans.begin()+n);
        return sub;
    }
};