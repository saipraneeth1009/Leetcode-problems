class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=0;
        int p=INT_MIN;
        while(right<nums.size()){
            if(nums[right]!=p){
                p=nums[right];
                swap(nums[left],nums[right]);
                left+=1;
            }
            right+=1;
        }
        return left;
    }
};