/*
    Approach - 1 Using HashTable/ Map
    Time Complexity:O(n)
    Time Complexity:O(n)
*/
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        vector<vector<int>> res;
        unordered_map<int,vector<int>> map;
        for(int i=0;i<arr.size();i++) map[arr[i]].push_back(i);
        for(int i =1  ;i<arr.size()-1;i++){
            for(int j =i+1;j<arr.size();j++){
                int sum = -1*(arr[i]+arr[j]);
                for(int k:map[sum]){
                    if(k<i) res.push_back({k,i,j});
                }
            }
        }
        return res;
    }
};