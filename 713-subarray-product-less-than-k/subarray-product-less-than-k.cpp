class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0 , count=0 , product=1;
        if(k<=1){
            return 0;
        }
        for(int right=0;right<nums.size();right++){
            product=product*nums[right];
            while(product>=k){
                product=product/nums[left];
                left++;
               
            }
             count=count+right-left+1;
        }
        return count;
    }
};