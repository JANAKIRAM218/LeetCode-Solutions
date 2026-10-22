class Solution {
public: 
    int check(vector<int>& bloomDay, int cur,int m, int k){
        int boq_count=0;
        int flow_count=0;
        for(int i:bloomDay){
            if(i<=cur){
                flow_count++;
                if(flow_count==k){
                    boq_count++;
                    flow_count=0;
                }

            }
            else{
                flow_count=0;
            }
        } 
        return boq_count>=m;



    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int ans=-1;
        int left=*min_element(bloomDay.begin(),bloomDay.end());
        int right=*max_element(bloomDay.begin(),bloomDay.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            if(check(bloomDay,mid,m,k)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;

            }

        }
        return ans;
    }
};