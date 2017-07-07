class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() <= 0)
            throw invalid_argument("nums is empty.");
        
        int left = numeric_limits<int>::min();
        int right = numeric_limits<int>::min();
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i - 1 >= 0) left = nums[i - 1];
            else left = numeric_limits<int>::min();
            
            if (i + 1 < nums.size()) right = nums[i + 1];
            else right = numeric_limits<int>::min();
            
            if (nums[i] > left && nums[i] > right)
                return i;
        }
        return 0;
    }
};
