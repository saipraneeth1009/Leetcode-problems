class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        while(row<matrix.size()){
            if(matrix[row][0] <= target && target <= matrix[row][matrix[0].size()-1]){
                int left=0;
                int right=matrix[0].size()-1;

                while(left<=right){
                    int mid=left+(right-left)/2;

                    if(matrix[row][mid] == target) return true;
                    else if(matrix[row][mid]> target) right=mid-1;
                    else left=mid+1;
                }
                return false;
            }else{
                row+=1;
            }
        }
        return false;
    }
};