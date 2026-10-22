class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }

    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
        int count=0;
        int i=1;
        while(count<n){
            sumOdd+=i;
            i++;
            sumEven+=i;
            i++;
            count+=1;
            
        }
        int ans=-1;
        
        return gcd(sumOdd,sumEven);
    }
};