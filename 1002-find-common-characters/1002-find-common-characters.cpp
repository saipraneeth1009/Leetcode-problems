class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> common(26,0),current(26);
        for(int i=0;i<words[0].size();i++){
            common[words[0][i]-'a']+=1;
}
        for(int i=1;i<words.size();i++){
            for(int j=0;j<26;j++){
                current[j]=0;
            }
            
            for(int j=0;j<words[i].length();j++){
                current[words[i][j]-'a']+=1;
            }
            
            for(int j=0;j<26;j++){
                common[j]=min(current[j],common[j]);
            }
}
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(common[i]!=0){
                ans.push_back(string(1,i+'a'));
                common[i]-=1;
            }
}
        return ans;
    }
};