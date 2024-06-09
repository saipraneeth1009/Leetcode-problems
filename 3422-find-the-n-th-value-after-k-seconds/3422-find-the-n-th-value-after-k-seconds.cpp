class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> ans;
        const int MOD=1e9+7;
        int start=0;
        for(int i=0;i<n;i++){
            ans.push_back(1);
        }
        while(start<k){
            for(int i=1;i<n;i++){
                ans[i]+=ans[i-1];
                ans[i]=ans[i]%MOD;
            }
            start+=1;
        }
        return ans[n-1];

    }
};