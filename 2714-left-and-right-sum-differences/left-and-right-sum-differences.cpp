class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        int total=0;
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            total=total+nums[i];
        }

        for(int i=0;i<nums.size();i++){
            int rightsum=total-leftsum-nums[i];
            int diff=abs(leftsum-rightsum);
            ans.push_back(diff);
            leftsum=leftsum+nums[i];
        }
        return ans;
    }
};