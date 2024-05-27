class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> fre(n+1,0);
        for(int i=0;i<n;i++) fre[min(n,nums[i])]+=1;
        int p=0;
        for(int i=n;i>=0;i--){
            fre[i]+=p;
            if(i==fre[i]) return i;
            p=fre[i];
        }
        return -1;
    }
};