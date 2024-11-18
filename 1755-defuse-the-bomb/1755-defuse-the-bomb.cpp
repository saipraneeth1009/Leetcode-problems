class Solution {
public:
// 2 4 9 3
// 3 9 4 2
//
    vector<int> check(vector<int> arr,int k){
        vector<int> ans;
        int sum;
        for(int i=0;i<arr.size();i++){
            sum=0;
            for(int j=1;j<=k;j++){
                sum+=(arr[(i+j)%arr.size()]);
            }
            ans.push_back(sum);
        }
        return ans;
    }
    vector<int> decrypt(vector<int>& code, int k) {
        if(k>0) return check(code,k);
        else if(k<0) {
            reverse(code.begin(),code.end());
            vector<int> ans = check(code,abs(k));
            reverse(ans.begin(),ans.end());
            return ans;
        }
        
        vector<int> ans(code.size(),0);
        return ans;
    }
};