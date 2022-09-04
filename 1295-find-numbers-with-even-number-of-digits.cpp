class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int &num : nums) {
            int digits = 0;
            while (num) {
                num /= 10;
                digits++;
            }
            if (!(digits % 2)) {
                count++;
            }
        }
        return count;
    }
};
