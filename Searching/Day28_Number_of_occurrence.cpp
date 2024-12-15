/*
    Approach-1 by Counting
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int count=0;
        for(int i:arr) if(i==target) count++;
        return count;
    }
};