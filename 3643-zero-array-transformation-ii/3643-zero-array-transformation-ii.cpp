class Solution {
public:
    bool check(vector<int>&nums,vector<vector<int>> &queries,int mid){
        int n=nums.size();
        vector<int> arr(n+1,0);

        for(int i=0;i<mid;i++){
            arr[queries[i][0]]+=queries[i][2];
            arr[queries[i][1]+1]-=queries[i][2];
        }
        for(int i=1;i<arr.size();i++){
            arr[i]+=arr[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>arr[i]) return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count+=1;
        }
        if(count==nums.size()) return 0;
        int left=0,right=queries.size();
        int ans=-1;
        while(left<=right){
            int mid = left + (right-left)/2;

            if(check(nums,queries,mid)){
                ans=mid;
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return ans;
    }
};