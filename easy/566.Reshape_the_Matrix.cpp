class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        if (row <= 0) throw invalid_argument("nums is empty.");
        
        int column = nums[0].size();
        if (row * column != r * c)
            return nums;
        
        vector<vector<int>> result;
        vector<int> tmp(c);
        int index = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < column; ++j) {
                tmp[index++] = nums[i][j];
                if (index == c) {
                    result.push_back(tmp);
                    index = 0;
                }
            }
        }
        return result;
    }
};
