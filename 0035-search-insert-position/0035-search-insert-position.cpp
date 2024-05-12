class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
        int left=0,right=nums.size()-1;
        int index=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>x){
                right=mid-1;
            }
            else if(nums[mid]<x){
                left=mid+1;
            }
            else{
                index=mid;
                break;
            }
        }
        if(index==-1){
            left=0;
            right=nums.size()-1;
            while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>x){
                right=mid-1;
            }
            else if(nums[mid]<x){
                left=mid+1;
            }
        }
            index=left;
}
        return index;
    }
};