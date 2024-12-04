/*
    Approach - 1 Using KMP Algorithm
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        if (s1.length() != s2.length()) {
        return false;
    }
    
    // Construct the temporary string
    string temp = s2 + "$" + s1 + s1;
    int n = temp.length();
    
    // Initialize the LPS (Longest Prefix Suffix) array
    vector<int> arr(n, 0);
    int i = 1;
    int len = 0;

    // Build the LPS array
    while (i < n) {
        if (temp[i] == temp[len]) {
            len++;
            arr[i] = len;
            i++;
        } else {
            if (len > 0) {
                len = arr[len - 1];
            } else {
                i++;
            }
        }
    }

    // Check if the length of `s1` appears in the LPS array
    for (int a : arr) {
        if (a == s1.length()) {
            return true;
        }
    }
    return false;
    }
};