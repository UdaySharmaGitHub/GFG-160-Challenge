//-- 4 Approaches / Methods to Solve Sort 0s, 1s and 2s --//

/*
    Approach - 1 Using Two Pointers and Switch Statements
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
    // Time Complexity: o(N)  | Space Complexity: O(1)
        int i = 0  , j = arr.size()-1 ,mid = 0;
        while(mid<=j){
            switch (arr[mid]){
                case 0:
                swap(arr[mid++],arr[i++]);
                break;
                case 1: mid++; break;
                case 2: swap(arr[mid],arr[j--]);break;
            }
        }
    }
};

/*
    Approach - 2 Using Two Pointers and If-else Statements
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
    // Two or Three Pointer
    // Time Complexity: o(N)  | Space Complexity: O(1)
    int st = 0 , mid = 0, en = arr.size()-1;
    while(mid<=en){
        if(arr[mid] == 0) swap(arr[st++],arr[mid++]);
        else if(arr[mid] == 1) mid++;
        else if(arr[mid] == 2) swap(arr[mid] ,arr[en--]);
    }
    }
};

/*
    Approach - 3 By Counting 0,1 and 2 and then modifies the Original array
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
    // By Counting the 0,1 and 2 
    // Time Complexity: o(N)  | Space Complexity: O(1)
    int count0 = 0 , count1 = 0 , count2 = 0;
    for(int i:arr){
        if(i==0) count0++;
        if(i==1) count1++;
        if(i==2) count2++;
    }
    int i = 0;
    while(count0--) arr[i++] = 0;
    while(count1--) arr[i++] = 1;
    while(count2--) arr[i++] = 2;
    }
};

/*
    Approach - 4 By Counting 0,1 and 2 and then modifies the Original array
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        // Using In-built Sort Function
        // Time Complexity: o(N*log(N))  | Space Complexity: O(1)
        sort(arr.begin(),arr.end());
    }
};