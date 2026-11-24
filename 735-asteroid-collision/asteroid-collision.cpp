class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (auto x:asteroids){
            bool check=true;
            while(!stk.empty() && stk.top() > 0 && x < 0 ){
                if(stk.top()==-x){
                    stk.pop();
                    check=false;
                    break;
                }
                else if(stk.top()<-x){
                    stk.pop();

                }
                else{
                   
                    check=false;
                    break;
                }
            }
            if(check){
                stk.push(x);
            }
            

            
        }
        vector<int> vec;

        while(!stk.empty()){
                vec.push_back(stk.top());
                stk.pop();
            }

            reverse(vec.begin(),vec.end());
            return vec;
    }
};