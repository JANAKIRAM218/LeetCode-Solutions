class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int> stk;
        int last_one;
        int last_two;
        for (auto i : tokens) {
            if(i=="+"){
                last_one=(stk.top());
                stk.pop();
                last_two=(stk.top());
                stk.pop();
                stk.push(last_one+last_two);


            }
            else if(i=="-"){
                last_one=(stk.top());
                stk.pop();
                last_two=(stk.top());
                stk.pop();
                stk.push(last_two-last_one);

                
            }
            else if(i=="*"){
                last_one=(stk.top());
                stk.pop();
                last_two=(stk.top());
                stk.pop();
                stk.push(last_one*last_two);

                
            }
            else if(i=="/"){
                last_one=(stk.top());
                stk.pop();
                last_two=(stk.top());
                stk.pop();
                stk.push(last_two/last_one);

                
            }
            else{
                stk.push(stoi(i));
            }

        }

        return stk.top();
    }
};