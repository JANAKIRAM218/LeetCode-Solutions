class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string k=s;
            sort(s.begin(),s.end());
            mp[s].push_back(k);
        }

        vector<vector<string>> ans;
        for (auto& [key,val]:mp){
            ans.push_back(val);
        }
        return ans;
    }
};