class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int> pre(n,0);
        for(int i=1;i<n;i++){
            if(nums[i-1]%2==nums[i]%2) pre[i]=1;
}
        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
}
        vector<bool> ans;
        for(int i=0;i<queries.size();i++){
            if(pre[queries[i][0]]-pre[queries[i][1]] == 0) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
        
    }
};