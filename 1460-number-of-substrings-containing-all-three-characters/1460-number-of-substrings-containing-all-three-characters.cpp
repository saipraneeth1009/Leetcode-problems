class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0;
        int a=0,b=0,c=0;
        int ans=0;

        while(right<s.size()){
            if(a>=1 && b>=1 && c>=1){
                ans+=(s.size()-right+1);
                if(s[left]=='a') a-=1;
                else if(s[left]=='b') b-=1;
                else c-=1;

                left+=1;
            }else{
                if(s[right]=='a') a+=1;
                else if(s[right]=='b') b+=1;
                else c+=1;

                right+=1;
            }
        }

        while(left<s.size() && a>=1 && b>=1 && c>=1){
                ans+=1;
                if(s[left]=='a') a-=1;
                else if(s[left]=='b') b-=1;
                else c-=1;

                left+=1;
        }

        return ans;
    }
};