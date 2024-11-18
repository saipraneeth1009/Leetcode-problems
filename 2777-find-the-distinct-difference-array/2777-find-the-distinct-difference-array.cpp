class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_set<int> check;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }

        for(int i=0;i<nums.size();i++){
            check.insert(nums[i]);

            mp[nums[i]]-=1;
            if(mp[nums[i]]==0) mp.erase(nums[i]);
            ans.push_back(check.size()-mp.size());
        }
        return ans;
    }
};