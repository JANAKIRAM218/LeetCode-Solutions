class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_count=0;
        for(auto i:nums){
            int num=i;
            int count=0;
            while(num>0){
                count++;
                num=num/10;
            }
            if(count%2==0){
                even_count++;
            }
        }  
        return even_count; 
    }
};