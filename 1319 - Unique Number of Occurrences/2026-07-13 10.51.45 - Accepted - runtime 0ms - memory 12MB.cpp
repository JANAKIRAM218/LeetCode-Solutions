class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            m[arr[i]]++;
        }
        vector<int>v1;
        for(auto x : m){
            v1.push_back(x.second);
        }
        sort(v1.begin(), v1.end());
        for(int i = 0; i<v1.size() - 1; i++){
            if(v1[i] == v1[i+1]){
                return false;
            }
        }
        return true;
    }
};