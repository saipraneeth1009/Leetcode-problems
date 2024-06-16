class Solution {
public:
    // 1 2
    // 1 3
    // 2 3
    // 3 4
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start=intervals[0][0],end=intervals[0][1];
        int ans=0;
        for(int i=1;i<intervals.size();i++){
            int cur_end=intervals[i][1],cur_start=intervals[i][0];
            if(cur_start>=end){
                end=cur_end;
            }
            else{
                ans+=1;
                end=min(end,cur_end);
            }
        }
        return ans;
    }
};