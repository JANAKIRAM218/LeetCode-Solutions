class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>vec;
        for(int i=left;i<=right;i++){
           
            int x=i;
            while(x>0){
                int lst=x%10;
                if(lst==0 || i%lst!=0){
                    break;
                }
               
                x=x/10;
            }
            if(x==0){
                vec.push_back(i);
            }
        }
        return vec;
    }
};