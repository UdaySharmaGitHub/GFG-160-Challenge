/*
    Approach-1 Using Binary Search
    Time Complexity: O(n*log(n))
    Spacee Complexity: O(1)
*/
class Solution {
  public:
    bool bs(vector<vector<int>> &mat, int x,int n,int idx){
        int i = 0 ,j=n;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(mat[idx][mid] == x)return 1;
            else if(mat[idx][mid] > x) j =mid-1;
            else i = mid+1;
        }
        return 0;
    }
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int flag = 0;
        for(int i = 0 ; i<mat.size();i++){
            int n = mat[i].size()-1;
            if(mat[i][0] <= x && mat[i][n]>=x && bs(mat,x,n,i)) flag =1;
            if(flag) return 1;
        }
        return 0;
    }
};