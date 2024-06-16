class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int start=points[0][0];
        int end=points[0][1];
        int ans=0;
        for(int i=1;i<points.size();i++){
            int cur_start=points[i][0];
            int cur_end=points[i][1];
            if(cur_start>end){
                end=cur_end;
            }
            else{
                ans+=1;
                end=min(cur_end,end);
            }
        }
        return points.size()-ans;
    }
};