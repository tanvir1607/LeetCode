class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> Map;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (Map.count(need)) return {Map[need], i};
            else Map[nums[i]] = i;
        }
        return {};
    }
};
// Complexity = O(NlogN)




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Map;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (Map.count(need)) return {Map[need], i};
            else Map[nums[i]] = i;
        }
        return {};
    }
};
// Complexity = O(N)