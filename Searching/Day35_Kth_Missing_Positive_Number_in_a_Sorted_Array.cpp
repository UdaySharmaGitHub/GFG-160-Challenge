/*
    Approach-1 Using Binary Search
    Time Complexity: O(log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
         int lo = 0, hi = arr.size() - 1;
    int res = arr.size() + k;
    // Binary Search for index where arr[i] > (i + k)
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (arr[mid] > mid + k) {
            res = mid + k;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    return res;
    }
};

/*
    Approach-2 Without Using Frequency Array
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        for(int i =0;i<arr.size();i++){
            if(arr[i] > k+i) return k+i;
        }
        return k+arr.size();
    }
};

/*
    Approach-3 Using Frequency Array
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        // Using Frequency Array
        // Time Complexity: O(N) | Space Complexity: O(N);
        int maxa = INT_MIN;
        for(int i:arr) maxa = max(maxa,i);
        vector<int> freq(maxa+1,0);
        for(int i:arr) freq[i]++;
        for(int i=1;i<freq.size();i++){ 
            if(freq[i] == 0) k--;
            if(k==0) return i;
        }
        return arr[arr.size()-1]+k;
    }
};