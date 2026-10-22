class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int minimum=INT_MAX;
        for(int price:prices){
            minimum=min(price,minimum);
            ans=max(ans,price-minimum);
        }
        return ans;
    }

};