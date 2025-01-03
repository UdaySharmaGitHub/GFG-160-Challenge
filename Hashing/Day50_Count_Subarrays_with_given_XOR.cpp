/*
    Approach - 1 using Unordered_Map
    Time Complexity:O(n)
    Space Complexity:O(n)
*/
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> map;
        int sum  =0,res = 0  ;
        for(int i:arr){
            sum^=i;
            if(sum == k) res++;
            if(map[sum^k]) res += map[sum^k];
            map[sum]++;
        }
        return res;
    }
};