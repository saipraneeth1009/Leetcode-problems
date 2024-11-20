class Solution {
public:
    int takeCharacters(string s, int k) {
        // 0 1 2 3 4 5
        //size =6
        //i=2
        //j=4

        int a=0,b=0,c=0,ca=0,cb=0,cc=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='a') a+=1;
            if(s[i]=='b') b+=1;
            if(s[i]=='c') c+=1;
        }

        if(a<k || b<k || c<k) return -1;

        int i=0,j=s.size()-1;

        int mini=INT_MAX;
        while(i<s.size() && (ca<k || cb<k || cc<k)){
            if(s[i]=='a') ca+=1;
            else if(s[i]=='b') cb+=1;
            else cc+=1;
            
            i+=1;
        }
        i-=1;

        mini=min(mini,i+1);
        
        while(i>=0 && i<=j){
            if(s[i]=='a') ca-=1;
            else if(s[i]=='b') cb-=1;
            else cc-=1;
            i-=1;

            while(i<=j && (ca<k || cb<k || cc<k)){
                if(s[j]=='a') ca+=1;
                else if(s[j]=='b') cb+=1;
                else cc+=1;
                j-=1;
            }
            int len=i+s.size()-j;
            mini=min(mini,len);
        }
        return mini;

    }
};