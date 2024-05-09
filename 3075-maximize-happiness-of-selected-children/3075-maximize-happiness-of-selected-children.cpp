class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long maxsum=0;
        priority_queue<int> check;
        int n=happiness.size();
        for(int i=0;i<n;i++){
            check.push(happiness[i]);
        }
        int p=0;
        while(!check.empty() && p<k){
            int top=check.top();
            if(top<=p) maxsum+=0;
            else maxsum+=(top-p);
            p+=1;
            check.pop();
        }
        return maxsum;
    }
};