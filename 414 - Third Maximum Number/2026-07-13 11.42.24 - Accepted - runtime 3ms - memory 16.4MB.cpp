class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
            for(int x : nums){
                s.insert(x);
            }
        int siz = s.size();
        if(siz<3){
            sort(nums.begin(), nums.end());
            int val = nums[n-1];
            return val;
        }
        else{
            set<int>s;
            for(int x : nums){
                s.insert(x);
            }
            int ans = 0;
            deque<int>v;       
            for(int l : s){
                v.push_front(l);

            }
            return v[2];

            
        }
        return 0;
    }
};