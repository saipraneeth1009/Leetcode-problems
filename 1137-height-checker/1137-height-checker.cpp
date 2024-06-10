class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // 1 1 4 2 1 3
        // 1 1 1 2 3 4
        vector<int> check;
        int count=0;
        for(int i=0;i<heights.size();i++){
            check.push_back(heights[i]);
        }
        sort(check.begin(),check.end());
        
        for(int i=0;i<check.size();i++){
            if(check[i]!=heights[i]) count+=1;
        }
        return count;
        // 1 1 1 1 2 2 2 2
        // 2 1 2 1 1 2 2 1
    }
};