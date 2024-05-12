class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int start=-1,end=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>target){
                right=mid-1;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }
            else{
                while(nums[left]!=target) left+=1;
                while(nums[right]!=target) right-=1;
                start=left;
                end=right;
                break;
            }
        }
        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};