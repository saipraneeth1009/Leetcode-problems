class Solution {
public:
    bool check(vector<vector<char>> &board,int i,int j,string word){
        if(word.empty()) return true;
        if(i<0 || j<0 || i>=board.size()|| j>=board[0].size() ) return false;
        if(board[i][j]=='*') return false;
        if(word[0]!=board[i][j]) return false;

        board[i][j]='*';
        if(check(board,i-1,j,word.substr(1))) return true;
        if(check(board,i+1,j,word.substr(1))) return true;
        if(check(board,i,j-1,word.substr(1))) return true;
        if(check(board,i,j+1,word.substr(1))) return true;
        board[i][j]=word[0];

        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(check(board,i,j,word)) return true;
            }
        }
        return false;
    }
};