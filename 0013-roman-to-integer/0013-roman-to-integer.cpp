class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> check;
       check.insert({'I',1});
       check.insert({'V',5});
       check.insert({'X',10});
       check.insert({'L',50});
       check.insert({'C',100});
       check.insert({'D',500});
       check.insert({'M',1000});
       int ans=0;
       ans+=check[s[s.size()-1]];
       for(int i=s.size()-2;i>=0;i--){
        if(check[s[i]] < check[s[i+1]]){
            ans-=check[s[i]];
        }
        else{
            ans+=check[s[i]];
        }
       }
       return ans;
    }
};