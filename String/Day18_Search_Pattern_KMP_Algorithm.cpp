/*
    Approach - 1 Using KMP Algorithm
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    vector<int> search(string& pat, string& txt) {
        // code here
         vector<int> ans;
        int n = pat.length();
        for(int i=0; i<txt.length()-n+1; i++) {
            if(pat[0] != txt[i])  continue;
            string str = txt.substr(i, n);
            if(str == pat)  ans.push_back(i);
       }
       return ans;
    }
};