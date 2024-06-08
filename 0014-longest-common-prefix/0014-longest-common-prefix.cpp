class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longest=strs[0];
        string common;
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<longest.size();j++){
                if(longest[j]==strs[i][j]) common+=longest[j];
                else break;
            }
            longest=common;
            common="";
        }
        return longest;
    }
};