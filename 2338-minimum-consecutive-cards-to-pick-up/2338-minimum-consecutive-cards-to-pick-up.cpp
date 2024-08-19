class Solution {
public:
    // 3 4 2 4 3 7
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> check;
        int right=0,left=0,mini=INT_MAX;

        while(right < cards.size()){
            if(check.find(cards[right])==check.end()){
                check[cards[right]]=right;
            }
            else{
                left=check[cards[right]];
                mini=min(mini,right-left+1);
                check[cards[right]]=right;
            }
            right+=1;
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};