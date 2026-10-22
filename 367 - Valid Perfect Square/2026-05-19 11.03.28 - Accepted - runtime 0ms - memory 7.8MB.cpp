class Solution {
public:
    bool isPerfectSquare(long num) {
        long low=1;
        long high=(num+2-1)/2;
        long mid;
        while(low<=high){
            mid=(low+high)/2;
            if(mid*mid==num){
                return true;

            }
            if(mid*mid<num){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return 0;
    }
};