/*
    Approach - 1 using Unordered_Map
    Time Complexity:O(n)
    Space Complexity:O(n)
*/
class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> map;
        int sum = 0 ,count = 0;
        map[0] = 1;
        for(int i:arr){
            sum+=i;
            int left = sum-k;
            if(map[left]) count+=map[left];
            map[sum]++;
        }
        return count;
    }
};