/*
    Approach-1 Binary Search;
    Time Complexity: O(log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
       int i=0 , j = arr.size()-1;
       int mid = i + (j-i)/2;
       while(i<j){
           if(arr[mid] < arr[mid+1])    i = mid+1;
           else j = mid;
           mid = i+(j-i)/2;
       }
       return i;
    }
};