class Solution {
public:
    void generatePerm(vector<int> &nums,vector<vector<int>> &ans,vector<int> &check){
        if(check.size()==nums.size()){
            ans.push_back(check);
            return ;
        }
        for(auto it:nums){
            if(find(check.begin(),check.end(),it)==check.end()){
                check.push_back(it);
                generatePerm(nums,ans,check);
                check.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> check;
        generatePerm(nums,ans,check);
        return ans;
    }
};