class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result;
        
        for (int i = 0; i < findNums.size(); ++i) {
            bool find = false;
            int locate = locate_at(nums, findNums[i]);
            if (-1 == locate) {
                result.push_back(-1);
                continue;
            }
            for (int j = locate + 1; j < nums.size(); ++j) {
                if (nums[j] > findNums[i]) {
                    result.push_back(nums[j]);
                    find = true;
                    break;
                }
            }
            if (!find)
                result.push_back(-1);
        }
        return result;
    }
private:
    int locate_at(const vector<int>& nums, int findNum) {
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == findNum)
                return i;
        }
        return -1;
    }
};