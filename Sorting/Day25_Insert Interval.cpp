// User function Template for C++
/*
    Approach-1 
    Time Complexity: O(n)
    Space Complexity: O(n)
*/
class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
 vector<vector<int>> res;
        
        int s=newInterval[0];
        int e=newInterval[1];
        int n=intervals.size();
        bool flag =true;
        
        for(int i=0;i<n;i++){
          
               if(intervals[i][1]<s){
                   res.push_back(intervals[i]);
                   continue;
               }
              
               if(intervals[i][0]>e){
                   if(flag){
                       res.push_back({s,e});
                       flag=false;
                   }
                   res.push_back(intervals[i]);
                   continue;
               }
               else{
                   s=min(s,intervals[i][0]);
                   e=max(e,intervals[i][1]);
               }
               
             
        }
        if(flag)res.push_back({s,e});
        return res;
    }
};