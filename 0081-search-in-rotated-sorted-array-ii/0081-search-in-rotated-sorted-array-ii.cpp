class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target) return true;
            if(nums[left]==nums[mid] && nums[right]==nums[mid]){
                left+=1;
                right-=1;
            }
            
            else if(nums[mid]>=nums[left]){
                if(target>=nums[left] && target<=nums[mid]) right=mid-1;
                else left=mid+1;
            }
            else{
                if(target>=nums[mid] && target <=nums[right]) left=mid+1;
                else right=mid-1;
            }
}
        return false;
    }
};