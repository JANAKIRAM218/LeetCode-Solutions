class Solution {
public:
    int countDigits(int num) {
        int number=num;
        int count=0;
        while(num>0){
            int lst_digit=num%10;
            if(number%lst_digit==0){
                count+=1;
            }
            num/=10;
        }
        return count;
    }
};