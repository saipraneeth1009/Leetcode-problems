class Solution {
public:
    // 3 4 2 4 3 7
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> check;
        int right=0,left=0,mini=INT_MAX;

        while(right < cards.size()){
            check[cards[right]]+=1;

            while(check[cards[right]]>1){
                mini=min(mini,right-left+1);
                check[cards[left]]-=1;
                left+=1;
            }
            right+=1;
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};