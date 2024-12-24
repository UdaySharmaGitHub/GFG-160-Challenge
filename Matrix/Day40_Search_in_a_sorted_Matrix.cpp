/*
    Approach-1 Using Binary Search
    Time Complexity: O(log(n) + log(m))
    Spacee Complexity: O(1)
*/
class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int row = mat.size() , col = mat[0].size();
        int st = 0  , en = row*col -1;
        while(st<=en){
            int mid = st + (en -st)/2;
            int ele  = mat[mid/col][mid%col];
            if(x == ele)return 1;
            else if(x > ele) st =mid+1;
            else en = mid-1;
        }
        return 0;
    }
};