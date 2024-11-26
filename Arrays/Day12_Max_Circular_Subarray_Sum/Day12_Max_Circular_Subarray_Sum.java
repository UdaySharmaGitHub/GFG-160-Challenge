/*
    Approach -1 Using Kadane's Algorithm
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
class Solution {

    // a: input array
    // n: size of array
    // Function to find maximum circular subarray sum.
    public int circularSubarraySum(int arr[]) {

        // Your code here
        int max_so_far = 0 ; // Track the maximum Subarray Sum
        int min_so_far = 0; // Track the minimum Subarray Sum
        int minSum = arr[0] ; // Puri Array useme Jo Minimum sum Sub array
        int maxSum = arr[0]; // Puri Array useme Jo Maximum sum Sub array;
        int total = 0;
        for(int i=0;i<arr.length;i++){
            
            // Kadane's Algorithm for Maximum Subarray Sum
            max_so_far = Math.max(max_so_far + arr[i],arr[i]);
            maxSum = Math.max(maxSum,max_so_far);
            
            // Kadane's Algorithm for Minium Subarray Sum
            min_so_far = Math.min(min_so_far + arr[i],arr[i]);
            minSum = Math.min(minSum,min_so_far);
            
            total += arr[i];
        }
        return Math.max(total - minSum,maxSum);
    }
}