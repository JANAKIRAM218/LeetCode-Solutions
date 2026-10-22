class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n= arr.size();
        if(n<3){
            return false;
        }
        int peak=0;
        int i;
        for(i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
            }
            if(arr[i]>arr[i+1]){
                peak=i;
                break;
            }
        }
        if(peak==0 || peak==n-1){
            return false;
        }

        for(i;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }


        
        return true;
    }
};