class Solution {
public:
    int pivotInteger(int n) {
        for (int i=1;i<n+1;i++){
            int sp=(i*(i+1))/2;
            int sn=((n*(n+1))/2)+i;
            if(sp==sn-sp){
                return i;
            }


        }    
        return -1; 
    }
};