class Solution {
public:
    bool check(vector<int> piles,int val,int h){
        long hrs=0;
        for (int i:piles){
            hrs+=(i+val-1)/val;
        }
        return hrs<=h; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        auto maxi=*max_element(piles.begin(),piles.end());
        int left =1;
        int right= maxi;
        int best_min=1;
        
     while(left<=right){
            int mid=left+(right-left)/2;
            if(check(piles,mid,h)){
                best_min=mid;
                right=mid-1;

            }
            else{
                left=mid+1;
            }
        }
        return best_min;
    }
};