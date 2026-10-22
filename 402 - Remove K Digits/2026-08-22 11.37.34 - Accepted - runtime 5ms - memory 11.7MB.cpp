class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> stk;
        for (char i:num){
            while(!stk.empty() && stk.top()>i && k>0){
                stk.pop();
                k--;
                
            }
            stk.push(i);
        }
        while(k>0){
            stk.pop();
            k--;
        }
        string str="";
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
        }
        reverse(str.begin(),str.end());
        int c=0;
        while(c<str.size() && str[c]=='0'){
            c++;
        }
        str=str.substr(c);
        if(str==""){ return "0";}
        return str;
    }
};