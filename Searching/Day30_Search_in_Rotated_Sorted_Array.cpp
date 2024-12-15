/*
    Approach-1 Binary Search;
    Time Complexity: O(log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
  int peakEle(vector<int>arr){
      int i = 0 , j = arr.size()-1 , mid;
      while(i<j){
          mid = i+(j-i)/2;
          if(arr[mid]>=arr[0]) i = mid+1;
          else  j = mid;
      }
      return i,j;
  }
  int bs(vector<int> arr,int st,int en,int key){
      int mid = st + (en - st)/2;
      while(st<=en){
          if(arr[mid] == key) return mid;
          else if(arr[mid] > key) en = mid-1;
          else  st = mid+1;
          mid = st + (en - st)/2;
      }
      return -1;
  }
    int search(vector<int>& arr, int key) {
        // complete the function here
        int peakIdx = peakEle(arr);
        if(key >= arr[peakIdx] && key <= arr[arr.size()-1])
            return bs(arr,peakIdx,arr.size()-1,key);
        else return bs(arr,0,peakIdx-1,key);
    }
};