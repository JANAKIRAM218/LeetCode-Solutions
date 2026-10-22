class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int count=0;
        long long  digit=0;
        for (int i=1;i<=k*2;i++){
            digit=(digit*10+1)%k;
            if(digit==0){
                return i;
            }
        } 
        return -1;
    }
};