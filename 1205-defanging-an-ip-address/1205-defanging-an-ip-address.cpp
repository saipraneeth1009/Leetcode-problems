class Solution {
public:
    string defangIPaddr(string address) {
        string inbtw="[.]";
        string ans;
        for(int i=0;i<address.size();i++){
            if(address[i]=='.') ans+=inbtw;
            else ans+=address[i];
        }
        return ans;
    }
};