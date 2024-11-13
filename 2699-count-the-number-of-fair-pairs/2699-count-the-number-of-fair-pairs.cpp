class Solution {
public:
    long long bs(vector<int> &nums,int idx,int val){
        long long res=0;
        int left=idx+1,right=nums.size()-1;

        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[idx]+nums[mid] >= val){
                right=mid-1;
            }else{
                res+=(mid-left+1);
                left=mid+1;
            }
        }
        return res;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        // 0 1 7 4 4 5
        // 0 1 4 4 5 7

        // 1 7 9 2 5
        // 1 2 5 7 9
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            int l = bs(nums,i,lower);
            int u = bs(nums,i,upper+1);
            ans+=1LL*abs(u-l);
        }
        return ans;
    }
};