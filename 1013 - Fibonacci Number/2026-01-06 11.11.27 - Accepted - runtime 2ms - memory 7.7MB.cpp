class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }

    int f=0;
    int s=1;
    int p=1;
    for(int i=0;i<n-1;i++){
        p=f+s;
        f=s;
        s=p;
    }
    return p;
    }
};