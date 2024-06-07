class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        int i=0;
        string dummy,ans;
        while(i<sentence.length()){
            dummy="";
            while(i<sentence.length() && sentence[i]!=' '){
                dummy+=sentence[i];
                if(find(dictionary.begin(),dictionary.end(),dummy)!=dictionary.end()){
                    break;
                }
                i+=1;
            }
            while(i<sentence.length() && sentence[i]!=' '){
                i+=1;
            }
            ans+=(dummy+" ");
            i+=1;
        }
        ans.pop_back();
        return ans;
    }
};