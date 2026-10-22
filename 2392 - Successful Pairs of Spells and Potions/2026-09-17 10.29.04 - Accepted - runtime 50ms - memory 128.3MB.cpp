class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        int n=potions.size();
        for (auto i:spells){
            int low=0;
            int res=n;
            int high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                long long pro=1LL*potions[mid]*i;
                if(pro>=success){
                    res=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            ans.push_back(n-res);
           
        }

        return ans;
    }
};