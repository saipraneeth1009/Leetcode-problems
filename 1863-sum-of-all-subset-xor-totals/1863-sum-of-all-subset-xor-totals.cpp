class Solution {
public:
    void check(vector<int> &nums,vector<int> &temp,int i,int &sum){
        if(i==nums.size()){
            int p=0;
            for(int i=0;i<temp.size();i++) p^=temp[i];
            sum+=p;
            return ;
        }
        temp.push_back(nums[i]);
        check(nums,temp,i+1,sum);
        
        temp.pop_back();
        check(nums,temp,i+1,sum);
        
    }
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        vector<int> temp;
        check(nums,temp,0,sum);
        return sum;
        
    }
};