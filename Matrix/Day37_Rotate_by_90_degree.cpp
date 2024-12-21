/*
    Approach-1 Firstly Transpose the matrix and then reverse it
    Time Complexity: O(n*m);
    Space Complexity: O(1);
*/
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        // code here
        for(int i=0;i<mat.size();i++)
            for(int j =i;j<mat.size();j++) swap(mat[i][j],mat[j][i]);
        reverse(mat.begin(),mat.end());
    }
};