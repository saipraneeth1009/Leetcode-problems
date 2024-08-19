class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int> , greater<int>> check;
        for(int i=0;i<nums.size();i++){
            if(check.size()<k){
                check.push(nums[i]);
            }else{
                if(check.top()<nums[i]){
                    check.pop();
                    check.push(nums[i]);
                }
            }
        }
        return check.top();
    }
};