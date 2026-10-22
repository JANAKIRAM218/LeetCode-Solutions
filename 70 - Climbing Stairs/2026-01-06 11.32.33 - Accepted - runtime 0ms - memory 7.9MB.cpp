class Solution {
public:
    int climbStairs(int n) {
        if(n<=1){
            return 1;
        }
        int f=1;
        int s=1;
        int p;
        for (int i=1;i<n;i++){
            p=f+s;
            f=s;
            s=p;
        }
        return p;
    }
};