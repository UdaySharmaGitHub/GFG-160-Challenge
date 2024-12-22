/*
    Approach-1 Using Simple loop checking Greater or Smaller
    Time Complexity: O(n+m)
    Spacee Complexity: O(1)
*/
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int i=0,j=mat[0].size()-1;
        while(i<mat.size() && j>=0)
        {
            if(mat[i][j]==x) return true;
            else if(mat[i][j]<x) i++;
            else j--;
        }
        return false;
    }
};

/*
    Approach-2 Using Brute Force
    Time Complexity: O(n^2)
    Spacee Complexity: O(1)
*/
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    for(int i=0;i<N;i++){
	        for(int j=0;j<M;j++){
	            if(mat[i][j]==X) return 1;
	        }
	    }
	    return 0;
	}
};