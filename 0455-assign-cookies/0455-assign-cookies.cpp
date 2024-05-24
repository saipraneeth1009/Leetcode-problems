class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                i+=1;
                j+=1;
            }
            else{
                j+=1;
            }
        }
        return min(i,j);
    }
};