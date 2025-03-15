#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; // Hash map to store numbers and their indices
        
        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Calculate the number needed to reach the target
            
            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return the indices of the two numbers
            }
            
            // Store the current number and its index in the map
            numMap[nums[i]] = i;
        }
        
        return {}; // This case should never occur as the problem guarantees one solution
    }
};
