/*
    Approach - 1 using Unordered_Map
    Time Complexity:O(n)
    Space Complexity:O(n)
*/
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int> map;
        vector<int> res;
        for(int i:a) map[i]++;
        for(int i:b){
            if(map[i]){
                res.push_back(i);
                map.erase(i);
            }
        }
        return res;
    }
};

/*
    Approach - 2 using Unordered_Set
    Time Complexity:O(n)
    Space Complexity:O(n)
*/
class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        // code here
        vector<int> res;
        unordered_set<int> set;
        for(int i:a) set.insert(i);
        for(int i:b){
            if(set.find(i) != set.end()){
                res.push_back(i);
                set.erase(i);
            }
        }
        return res;
    } 
};