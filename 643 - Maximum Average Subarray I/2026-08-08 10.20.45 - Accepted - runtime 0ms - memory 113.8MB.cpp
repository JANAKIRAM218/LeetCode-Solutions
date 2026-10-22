class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum+=nums[i];
        }
        ans = (double)sum/k;
        for (int i = 0; i < nums.size() - k; i++) {
            sum -= nums[i];
            sum += nums[i + k];
            double avg=(double) sum/k;
            ans = max(avg, ans);
        }
        return ans;
    }
};