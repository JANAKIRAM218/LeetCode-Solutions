class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for (char i : s) {
            if (i == ')') {
                if (stk.empty() || stk.top() != '(') {
                    return false;
                }
                stk.pop();
            } else if (i =='}' ) {
                if ( stk.empty() ||  stk.top() != '{') {
                    return false;
                }
                stk.pop();
            } else if (i == ']') {
                if ( stk.empty() ||  stk.top() != '[') {
                    return false;
                }
                stk.pop();
            } else {
                stk.push(i);
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};