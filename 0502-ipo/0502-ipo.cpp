class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>> check;
        for(int i=0;i<profits.size();i++){
            check.push({-capital[i],profits[i]});
        }
        priority_queue<int> ans;
        for(int j=0;j<k;j++){
            while(!check.empty() && abs(check.top().first)<=w){
                ans.push(check.top().second);
                check.pop();
            }

            if(ans.empty()) break;

            w+=ans.top();
            ans.pop();
        }
        return w;
    }
};