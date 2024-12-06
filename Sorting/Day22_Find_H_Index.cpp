/*
    Approach - 1 Counting and Sorting
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        // code here
        int n = citations.size();
        vector<int> citarr(n+1,0);
        for(int i:citations){
            citarr[ min(i,n) ]++;
        }
        int citres = 0;
        for(int hidx = n;hidx>=0;hidx--){
            citres += citarr[hidx];
            if(citres >= hidx) return hidx;
        }
        return 0;
    }
};