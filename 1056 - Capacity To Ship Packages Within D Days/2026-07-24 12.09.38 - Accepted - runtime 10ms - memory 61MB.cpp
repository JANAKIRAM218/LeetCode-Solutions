class Solution {
public:
    int check(vector<int> weights,int cap,int days){
        int t_days=1;
        int sum=0;
        for(int i:weights){
            if(sum+i>cap){
                t_days+=1;
                sum=i;
            }else{
                sum+=i;
            }
        }
        return t_days<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        int best_ans=left;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(weights,mid,days)){
                best_ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return best_ans;
    }
};