class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        
        int sum = 0;
        for (int i = 0; i < nums.size(); i += 2)
            sum += nums[i];
        return sum;
    }
    
private:
    inline void swap(int& a, int& b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    int partition(vector<int>& nums, int start, int end) {
        if (start >= end) return start;
        
        int i = start;
        for (int j = start; j < end; ++j) {
            if (nums[j] < nums[end]) {
                swap(nums[i++], nums[j]);
            }
        }
        swap(nums[i], nums[end]);
        return i;
    }
    
    void quickSort(vector<int>& nums, int start, int end) {
        if (start < end) {
            int pos = partition(nums, start, end);
            quickSort(nums, start, pos - 1);
            quickSort(nums, pos + 1, end);
        }
    }
};
