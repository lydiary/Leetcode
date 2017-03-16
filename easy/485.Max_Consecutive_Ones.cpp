class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int nbrOfOne = 0;
        int maxNbrOfConsecutiveOne = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                ++nbrOfOne;
                if (nbrOfOne > maxNbrOfConsecutiveOne)
                    maxNbrOfConsecutiveOne = nbrOfOne;
            } else {
                nbrOfOne = 0;
            }
        }
        return maxNbrOfConsecutiveOne;
    }
};