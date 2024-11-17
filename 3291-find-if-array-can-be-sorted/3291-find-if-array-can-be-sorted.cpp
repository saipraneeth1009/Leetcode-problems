class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        vector<int> sb;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int count=0;
            while(num>0){
                count+=(num&1);
                num=num>>1;
            }
            sb.push_back(count);
        }

        for(int i=nums.size()-1;i>=0;i--){
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1] && sb[j]==sb[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) return false;
        }
        return true;

    }
};