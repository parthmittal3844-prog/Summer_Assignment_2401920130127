class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans(r,vector<int>(c));
        int n=mat.size();
        int m=mat[0].size();
        if(m*n!=r*c){
            return mat;
        }
        for(int indx=0;indx<n*m;indx++){
            ans[indx/c][indx%c]=mat[indx/m][indx%m];
        }
        return ans;
    }
};
