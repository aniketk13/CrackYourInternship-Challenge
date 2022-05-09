class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int col_check=1;
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0)
                col_check=0;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0;
            }
        }
        
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col_check==0)
                matrix[i][0]=0;
            
        }
    }


    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>arr1(matrix.size());
        vector<int>arr2(matrix[0].size());
        fill(arr1.begin(),arr1.end(),-1);        
        fill(arr2.begin(),arr2.end(),-1);

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    arr1[i]=0;
                    arr2[j]=0;
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(arr1[i]==0 || arr2[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
