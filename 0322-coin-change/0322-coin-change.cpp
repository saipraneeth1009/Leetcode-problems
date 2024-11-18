class Solution {
public:
    long long check(vector<int> &coins,int idx,int amount,vector<vector<long long>> &dp){
        if(amount==0) return 0;
        if(idx==0){
            if(amount%coins[idx]==0) return amount/coins[idx];
            return INT_MAX;
        }

        if(dp[idx][amount]!=-1) return dp[idx][amount];

        long long notTaken  = check(coins,idx-1,amount,dp);

        long long taken=INT_MAX;
        if(amount>=coins[idx]){
            taken = 1+check(coins,idx,amount-coins[idx],dp);
        }
        return dp[idx][amount]=min(taken,notTaken);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<long long>> dp(n,vector<long long>(amount+1,-1));
        long long ans=check(coins,n-1,amount,dp);
        if(ans>=INT_MAX) return -1;
        return ans;
    }
};