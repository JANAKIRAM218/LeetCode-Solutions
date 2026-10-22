class Solution {
public:
    bool checkPerfectNumber(int num) {
        int result=0;
        if(num<=0){
            return 0;
        }
        for (int i=1;i<num;i++){
            if(num%i==0){
                result+=i;
            }
        }
        if(result==num){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};