class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elsum = 0, digsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            elsum += nums[i];

            int temp = nums[i];

            while (temp != 0) {
                int num = temp % 10;
                digsum += num;
                temp = temp / 10;
            }
        }

        return abs(elsum - digsum);
    }
};