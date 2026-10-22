class Solution {
public:
    bool isPalindrome(string s) {
        string full_string="";
        for(char i: s){
            if(isalnum(i)){
                full_string+=tolower(i);
            }
            
        }
        cout<<full_string;
        int i=0;
        int j=full_string.size()-1;
        while(i<=j){
            if(full_string[i]!=full_string[j]){
                return false;
            }
           i++;
           j--;

        }
        return true;
    }
};