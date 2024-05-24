class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        while(right<nums.size()){
            if(nums[right]!=0){
                swap(nums[left],nums[right]);
                left+=1;
            }
            right+=1;

        }
    }
};