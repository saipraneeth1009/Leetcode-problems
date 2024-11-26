class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> check;
        int start=0;
        int cur=0;
        int len=0,maxLen=0;
        while(cur<s.size()){
            check[s[cur]]+=1;
            if(check[s[cur]]==1){
                len+=1;
                cur+=1;
}
            else{
                while(check[s[cur]]>1){
                    check[s[start]]-=1;
                    start+=1;
                    len-=1;
}
                len+=1;
                cur+=1;
            }
            maxLen=max(len,maxLen);
}
        return maxLen;
    }
};