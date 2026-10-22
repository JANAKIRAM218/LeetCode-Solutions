class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int number=x;
        int SOD=0;
        while(x>0){
            int LD=x%10;
            SOD+=LD;
            x=x/10;
        }
        if(number%SOD==0){
            return SOD;
        }
        return -1;
    }
};