class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        long long maxi=INT_MIN,count=0;
        long long sum=0;
        int left=0,right=0;

        while(right<nums.size()){
            if(count<k){
                while(mp.find(nums[right])!=mp.end() && nums[right]>0 && left<right){
                    sum-=nums[left];
                    mp[nums[left]]-=1;
                    if(mp[nums[left]]==0) mp.erase(nums[left]);
                    left+=1;
                    count-=1;
                }
                sum+=nums[right];
                mp[nums[right]]+=1;
                count+=1;
            }

            if(count==k){
                maxi=max(maxi,sum);
                sum-=nums[left];
                mp[nums[left]]-=1;
                if(mp[nums[left]]==0) mp.erase(nums[left]);
                left+=1;
                count-=1;
            }
            right+=1;
        }
        if(maxi==INT_MIN) return 0;
        return maxi;
    }
};