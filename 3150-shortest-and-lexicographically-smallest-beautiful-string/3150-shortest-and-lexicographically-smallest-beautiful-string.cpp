class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        unordered_map<int,int> check;
        int len=INT_MAX,ones=0;
        for(int i=0;i<s.size();i++){
            ones+=(s[i]-'0');

            if(check.find(ones-k)!=check.end()){
                len=min(len,i-check[ones-k]);
            }
            if(ones==k && check.find(ones-k)==check.end()){
                if(len==INT_MAX) len=i+1;
                else len=min(len,i+1);
            }

            check[ones]=i;
        }

        int wl=0;
        int left=0,right=0;
        string ans="";
        ones=0;
        string dupe="";
        while(right < s.size()){
            if(wl<len){
                ones+=(s[right]-'0');
                dupe+=s[right];
                right+=1;
                wl+=1;
            }
            if(wl==len){
                if(ones==k){
                    if(ans=="" || dupe < ans) ans=dupe;
                }
                ones-=(s[left]-'0');
                dupe.erase(0,1);
                left+=1;
                wl-=1;
            }
        }
        if(wl==len){
                if(ones==k){
                    if(ans=="" || dupe < ans) ans=dupe;
                }
        }
        return ans;
    }
};