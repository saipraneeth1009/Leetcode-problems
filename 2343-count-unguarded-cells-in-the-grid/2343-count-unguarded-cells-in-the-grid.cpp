class Solution {
public:
    // 0 - unguarded
    // 1 - guarded
    // 2 - guard sat
    // 3 - wall present
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> check(m,vector<int>(n,0));

        for(int i=0;i<guards.size();i++){
           check[guards[i][0]][guards[i][1]] = 2;
        }

        for(int i=0;i<walls.size();i++){
            check[walls[i][0]][walls[i][1]] = 3;
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(check[i][j]==2){
                    for(int k=j+1;k<n && check[i][k]!=2 && check[i][k]!=3;k++){
                        check[i][k]=1;
                    }
                    for(int k=j-1;k>=0 &&  check[i][k]!=2 && check[i][k]!=3;k--){
                        check[i][k]=1;
                    }
                    for(int k=i+1;k<m && check[k][j]!=2 && check[k][j]!=3;k++){
                        check[k][j]=1;
                    }
                    for(int k=i-1;k>=0&&check[k][j]!=2 && check[k][j]!=3;k--){
                        check[k][j]=1;
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(check[i][j]!=1&&check[i][j]!=2&&check[i][j]!=3) ans+=1;
            }
        }
        return ans;
    }
};