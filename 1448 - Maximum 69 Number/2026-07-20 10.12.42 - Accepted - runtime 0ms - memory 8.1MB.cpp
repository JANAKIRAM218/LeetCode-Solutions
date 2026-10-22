class Solution {
public:
    int maximum69Number (int num) {
        string str=to_string(num);
        int n=str.size();
        int maxi=0;
        for(int i=0;i<n;i++){
            char ch=str[i];
            str[i]='9';
            maxi=max(stoi(str),maxi);
            str[i]=ch;

        }
        return maxi;
    }
};