class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxCount = 0;
        for (const int &num : nums) {
            if (num) {
                count++;
                maxCount = max(count, maxCount);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};
