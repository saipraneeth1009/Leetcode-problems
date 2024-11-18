class Solution {
public:
    int check(vector<int> &nums,int idx,int target){
        if(target==0 && idx<0) return 1;

        if(idx<0) return 0;

        int add = check(nums,idx-1,target-nums[idx]);
        int sub = check(nums,idx-1,target+nums[idx]);

        return (add+sub);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return check(nums,nums.size()-1,target);
    }
};