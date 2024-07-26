class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> check;
        for(int i=0;i<nums.size();i++){
            check.push_back({nums[i],i});
        }
        sort(check.begin(),check.end());
        int left=0,right=check.size()-1;

        while(left<right){
            if(check[left].first+check[right].first>target) right-=1;
            else if(check[left].first+check[right].first<target) left+=1;
            else return {check[left].second,check[right].second};
        }
        return {-1,-1};
    }
};