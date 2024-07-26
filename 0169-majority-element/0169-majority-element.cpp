class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cur=INT_MIN,count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0 && cur!=nums[i]){
              cur=nums[i];
              count=1;  
            }
            else if(count>0 && cur!=nums[i]) count-=1;
            else if(cur==nums[i]) count+=1;
        }
        return cur;
    }
};