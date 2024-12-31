/*
    Approach - 1 using Unordered_Set
    Time Complexity:O(n)
    Space Complexity:O(n)
*/
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> set;
        for(int i:a) set.insert(i);
        for(int i:b) set.insert(i);
        return set.size();
    }
};