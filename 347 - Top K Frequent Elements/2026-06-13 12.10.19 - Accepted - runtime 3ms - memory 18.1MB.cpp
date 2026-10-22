class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        vector<pair<int,int>> prs;
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
            
        }
        for(const auto&[x,y]:mp){
            prs.push_back({x,y});    
        }
        sort(prs.begin(), prs.end(),[](const pair<int,int>& a, const pair<int,int>& b) {
         return a.second >b.second;
     });

     for(int i=0;i<k;i++){
        ans.push_back(prs[i].first);
     }
        return ans;

        
    }
};