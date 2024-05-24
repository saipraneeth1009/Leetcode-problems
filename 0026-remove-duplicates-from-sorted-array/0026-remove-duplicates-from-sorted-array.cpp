class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=1;
        while(right<nums.size()){
            if(nums[left]!=nums[right]){
                swap(nums[left+1],nums[right]);
                left+=1;
            }
            right+=1; 
        }
        return left+1;
    }
};