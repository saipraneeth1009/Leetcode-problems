class Solution {
public:
void generatePerm(vector<int> &nums,vector<vector<int>> &ans,vector<int> &check,vector<int> &index){
    if(check.size()==nums.size()){
        if(find(ans.begin(),ans.end(),check)==ans.end()) ans.push_back(check);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(find(index.begin(),index.end(),i)==index.end()){
            index.push_back(i);
            check.push_back(nums[i]);
            generatePerm(nums,ans,check,index);
            check.pop_back();
            index.pop_back();
        }
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> check,index;
        generatePerm(nums,ans,check,index);
        return ans;
    }
};