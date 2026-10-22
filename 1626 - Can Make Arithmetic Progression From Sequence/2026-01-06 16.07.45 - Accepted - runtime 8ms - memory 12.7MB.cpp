class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        bool x=true;
        sort(arr.begin(), arr.end());
        int differences=abs(arr[0]-arr[1]);
        cout<<differences<<endl;
        for(int i=1;i<(arr.size()-1);i++){
           cout<<abs(arr[i]-arr[i+1])<<endl;
            if(abs(arr[i]-arr[i+1])!=differences){
                return false;
            }
        }
        return x;
    }
};