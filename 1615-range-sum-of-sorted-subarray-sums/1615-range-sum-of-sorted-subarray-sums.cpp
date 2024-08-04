class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sums;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                sums.push_back(sum);
            }
        }

        sort(sums.begin(),sums.end());
        for(int i=0;i<sums.size();i++){
            cout<<sums[i]<<" ";
        }
        int ans=0;
        for(int i=left-1;i<right;i++){
            ans+=sums[i];
            ans=ans%(1000000007);
        }
        ans=ans%(1000000007);
        return ans;

    }
};