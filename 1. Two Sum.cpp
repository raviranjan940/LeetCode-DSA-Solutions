class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); // Get the size of the input vector 'nums'.
        unordered_map<int, int> map; // Create an unordered map to store the elements from 'nums' and their corresponding indices.
        vector<int> ans; // Create a vector to store the result.

        for(int i = 0; i < n; i++) {
            // Check if the current element 'nums[i]' is already in the 'map'.
            if(map.find(nums[i]) != map.end()) {
                ans.push_back(map[nums[i]]); // If found, add the index of the first occurrence of this element to 'ans'.
                ans.push_back(i); // Add the current index 'i' to 'ans'.
                return ans; // Return the result vector with the indices of the two elements that sum up to the 'target'.
            } else {
                // If 'nums[i]' is not in the 'map', calculate the complement of the current element needed to reach the target
                // and store it as the key in the 'map' with the value being the current index 'i'.
                map[target - nums[i]] = i;
            }
        }

        return ans; // Return an empty vector if no such pair of elements is found in 'nums'.
    }
};
