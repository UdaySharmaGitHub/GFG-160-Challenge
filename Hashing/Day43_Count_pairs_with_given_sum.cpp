/*
    Approach - 1 Using HashTable/ Map
    Time Complexity:O(n)
    Time Complexity:O(n)
*/
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int> map;
        int count =0;
        for(int i:arr){
            if(map[target-i]) count+=map[target-i];
            map[i]++;
        }
        return count ;
    }
};