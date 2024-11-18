class Solution {
public:
    bool check(vector<int>&nums,int idx,int target,vector<vector<int>> &dp){
        if(target==0) return true;

        if(idx==0) return target==nums[idx];

        if(dp[idx][target]!=-1) return dp[idx][target];

        bool taken=false;
        if(nums[idx]<=target){
            taken = check(nums,idx-1,target-nums[idx],dp);
        }

        bool notTaken = check(nums,idx-1,target,dp);

        return dp[idx][target] = taken || notTaken;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        if(sum&1 == 1) return false;
        int n=(sum/2)+1;
        vector<vector<int>> dp(nums.size(),vector<int> (n,-1));
        return check(nums,nums.size()-1,sum/2,dp);
    }
};