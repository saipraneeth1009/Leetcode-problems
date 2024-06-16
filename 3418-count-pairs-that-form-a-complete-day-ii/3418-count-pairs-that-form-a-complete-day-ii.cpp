class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,long long> check;
        long long ans=0;
        for(int i=0;i<hours.size();i++){
            int rem=hours[i]%24;
            int com=(24-rem)%24;

            if(check.find(com)!=check.end()){
                ans+=check[com];
            }
            check[rem]+=1;
        }
        return ans;
        //12 2
        //6 1
        //0 2
    }
};