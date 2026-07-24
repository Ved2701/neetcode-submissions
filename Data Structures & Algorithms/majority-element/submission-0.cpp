class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int num = nums[0];
        for (int n : nums) {
            if (count == 0) {
                num = n;
            }
            if (n == num) {
                count++;
            }
            else if (n != num) {
                count--;
            }
        }
        return num;
    }
};