class Solution {
public:
    int sumOfDigits(int num){
        int sum=0;
        while(num>0){
            int lst_dgt=num%10;
           
            sum+=(lst_dgt*lst_dgt);
            num=num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int>seen;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            int x=sumOfDigits(n);
            n=x;
        }
        
        return n==1;

    }
};