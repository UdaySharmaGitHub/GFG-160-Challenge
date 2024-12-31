/*
    Approach - 1 using Unordered_Map
    Time Complexity:O(n)
    Space Complexity:O(n)
*/
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int count = 0 ,mina = INT_MAX , maxa = INT_MIN ,res = 1;
        unordered_map<int,int> map;
        for(int i:arr){ map[i]++; maxa = max(maxa,i);mina = min(mina,i);}
        for(int i =mina ; i<=maxa ; i++){
            if(map[i]) count++;
            else{res = max(res,count);count=0;}
        }
        res = max(res,count);
        return res;
    }
};