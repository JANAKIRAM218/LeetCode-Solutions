class Solution {
public:
    int climbStairs(int n) {
        int f=1;
        int s=1;
        for(int i=2;i<=n;i++){
            int x=f+s;
            f=s;
            s=x;

        }
        return s;
        
    }
};