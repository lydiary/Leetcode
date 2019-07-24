/**
 * @link https://leetcode.com/problems/two-sum/description/
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;
        vector<int> result;

        for (auto i = 0; i < nums.size(); ++i) {
            if (record.find(target - nums[i]) != record.end()) {
                result.push_back(record[target - nums[i]]);
                result.push_back(i);
                break;
            }
            record[nums[i]] = i;
        }
        return result;
    }
};