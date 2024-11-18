class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> count(nums.size()+1,0);
        for(int i=0;i<queries.size();i++){
            count[queries[i][0]]+=1;
            count[queries[i][1]+1]-=1;
        }
        for(int i=1;i<count.size();i++){
            count[i]+=count[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>count[i]) return false;
        }
        return true;
    }
};