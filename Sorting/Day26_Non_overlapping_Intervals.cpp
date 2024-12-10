/*
    Approach-1 Using Sorting;
    Time Complexity: O(n*log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
static bool compare(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(),intervals.end(),compare);
        int res = 0 ;
        int end= intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(end > intervals[i][0])res++;
            else end = intervals[i][1];
        }
        return res;
    }
};