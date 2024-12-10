/*
    Approach-1  Sort;
    Time Complexity: O(n*log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        res.push_back({arr[0][0],arr[0][1]});
        int i = 1  , j = 0 ;
        while(i<arr.size()){
            int t1 = arr[i][0] ,t2= arr[i][1];
            if(res[j][1] >= t1 && res[j][1] <= t2){
                res[j][1] = t2;
            }
            else if(res[j][1] < t1 && res[j][1] < t2){
                res.push_back({t1,t2});
                j++;
            }
         i++;
        }
        return res;
    }
};

