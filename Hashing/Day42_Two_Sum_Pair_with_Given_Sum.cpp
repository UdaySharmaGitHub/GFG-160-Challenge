/*
    Approach - 1 Using HashTable/ Map
    Time Complexity:O(n)
    Time Complexity:O(n)
*/
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> map;
        for(int i:arr){
            if(map[target-i]) return 1;
            map[i]++;
        }
        return 0;
    }
};

/*
    Approach - 2 Using Hashing/ Set
    Time Complexity:O(n)
    Time Complexity:O(n)
*/
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
        unordered_set<int> s;
        for(int i  =0  ; i<n;i++){
            int temp = x  -arr[i];
            if(s.find(temp)!=s.end()){
                return 1;
            }
            s.insert(arr[i]);
        }
	    return 0;
	}
};

/*
    Approach - 3 Using Sorting
    Time Complexity:O(n*log(n))
    Time Complexity:O(1)
*/
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int i =0 , j = n-1;
	    while(i<j){
	        int sum = arr[i]+arr[j];
	        if(sum==x) return 1;
	        else if(sum>x) j--;
	        else i++;
	    }
	    return 0;
	}
};