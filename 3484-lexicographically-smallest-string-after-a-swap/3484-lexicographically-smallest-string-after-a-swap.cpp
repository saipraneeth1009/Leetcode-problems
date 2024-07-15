class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0;i<s.size()-1;i++){
            int curr=s[i]-'0';
            int nxt=s[i+1]-'0';
            if(((curr&1) == (nxt&1)) && (curr>nxt)){
                swap(s[i],s[i+1]);
                break;
            }
        }
        return s;
    }
};