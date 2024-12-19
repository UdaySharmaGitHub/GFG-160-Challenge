/*
    Approach-1 Merge Sort;
    Time Complexity: O(n+m)
    Space Complexity: O(n+m)
*/
class Solution {
  public:
    int kthElement(vector<int>& arr1, vector<int>& arr2, int k) {
        // code here
         vector<int> ans;
        int i = 0 , j = 0;
        while(i<arr1.size() && j < arr2.size()){
            if(arr1[i]>arr2[j]){ ans.push_back(arr2[j++]);}
            else if(arr1[i]<arr2[j]){ ans.push_back(arr1[i++]);}
            else if(arr1[i]==arr2[j]){ ans.push_back(arr1[i++]);ans.push_back(arr2[j++]);}
        }
        while(i<arr1.size()) ans.push_back(arr1[i++]);
        while(j<arr2.size()) ans.push_back(arr2[j++]);
        
        return ans[k-1];
    }
};