/*
    Approach-1 Binary Search;
    Time Complexity: O(n*log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
  int check(vector<int> arr,int k,int pl){
      int sum = 0;
      int count =1;
      for(int i =0  ; i<arr.size();i++){
          if(sum + arr[i] > pl){count++;  sum = arr[i];  }
          else sum+=arr[i];
      }
      return count<=k;
  }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()) return -1;
        int low = 0,high = 0 ;
        for(int i:arr){
            low = max(i,low);
            high +=i;
        }
        int res = -1;
        while(low<= high ){
            int mid = low + ( high - low)/2;
            if(check(arr,k,mid)){  res = mid; high = mid - 1;  }
            else low = mid+1;
        }
        return res;
    }
};