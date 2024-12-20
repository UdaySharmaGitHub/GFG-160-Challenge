/*
    Approach-1 ✅Using Traversing the matrix track the row-start, row-end , column-start and column-end
    Time Complexity: O(n*m);
    Time Complexity: O(n*m)
*/
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int> ans;
        int rs = 0 , re = mat.size()-1 , cs = 0 ,ce = mat[0].size()-1;
        int total = mat.size() * mat[0].size() , count =0;
        while(count<total && rs <= re && cs <=ce){
            for(int i =cs;i<=ce && count<total;i++){ ans.push_back(mat[rs][i]); count++;}
            rs++;
            for(int i=rs ;i<=re && count<total;i++){ ans.push_back(mat[i][ce]); count++;}
            ce--;
            for(int i=ce ;i>=cs && count<total;i--){ ans.push_back(mat[re][i]); count++;}
            re--;
            for(int i=re ;i>=rs && count<total;i--){ ans.push_back(mat[i][cs]); count++;}
            cs++;
        }
        return ans;
    }
};