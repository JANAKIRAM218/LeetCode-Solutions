class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map to store number -> index mapping
        unordered_map<int, int> numMap;
        
        // Traverse the array
        for (int i = 0; i < nums.size(); i++) {
            // Calculate complement
            int complement = target - nums[i];
            
            // Check if complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // Return the indices of the current number and its complement
                return {numMap[complement], i};
            }
            
            // Add the current number and its index to the map
            numMap[nums[i]] = i;
        }
        
        // If no solution found (this shouldn't happen per problem constraints)
        return {};
    }
};
