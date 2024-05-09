class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
long long maxsum=0;
        int n=happiness.size();
        int p=0;
        for(int i=n-1;i>=n-k;i--){
            if(happiness[i]<=p){
                maxsum+=0;
            }
            else maxsum=maxsum+(happiness[i]-p);
            p+=1;
}
        return maxsum;
    }
};