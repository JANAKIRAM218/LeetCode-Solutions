class Solution {
public:
    bool checkPerfectNumber(int num) {
        int result=0;
        if(num<=0){
            return 0;
        }
        for (int i=1;i<=num/2;i++){
            if(num%i==0){
                result+=i;
            }
        }
        if(result==num){
            return 1;
        }
        return 0;
        
    }
};