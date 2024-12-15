/*
    Approach-1 Binary Search;
    Time Complexity: O(log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int i = 0  , j =  arr.size()-1;
        int mid ;
         while(i<j){
             mid = i+ (j-i)/2;
             if(arr[i]<arr[j]) return arr[i];
             if(arr[mid]>arr[j]) i = mid+1;
             else  j = mid;
         }
         return arr[i];
    }
};