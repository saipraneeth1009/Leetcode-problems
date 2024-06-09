class Solution {
public:
void generatePerm(int n,vector<vector<int>> &ans,vector<int> &check,unordered_map<int,int> &count){
    if(check.size()==n){
        ans.push_back(check);
        return;
    }
    for(auto it:count){
        int number=it.first;
        int fre=it.second;
        if(fre==0) continue;
        check.push_back(number);
        count[number]-=1;
        generatePerm(n,ans,check,count);
        check.pop_back();
        count[number]+=1;
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> check;
        unordered_map<int,int> count;
        for(auto it:nums){
            count[it]+=1;
        }
        int n=nums.size();
        generatePerm(n,ans,check,count);
        return ans;
    }
};