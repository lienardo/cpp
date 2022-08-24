class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum, prefixSum;
        sum = prefixSum = 0;
        for (int i : nums) {
            sum += i;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (prefixSum == sum - prefixSum - nums[i]) {
                return i;
            }
            prefixSum += nums[i];
        }
        return -1;
    }
};
