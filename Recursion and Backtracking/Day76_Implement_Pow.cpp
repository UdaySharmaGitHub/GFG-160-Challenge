/*
    Approach-1 Using in-Built function
    Time Complexity:  O(log(n))
    Space Complexity: O(1)
*/
class Solution {
  public:
    double power(double b, int e) {
        // code here
        return pow(b, e);
    }
};

/*
    Approach-2 Using Divide and Conquer
    Time Complexity:  O(log(n))
    Space Complexity: O(log(n))
If e is even: power(b, e) = power(b, e / 2) * power(b, e / 2); 
If e is odd: power(b, e) = b * power(b, e / 2) * power(b, e / 2); 
*/
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if(e==0) return 1;
        if(e<0) return 1/power(b,-e);
        double res = power(b,e/2);
        if(e&1) return b*res*res;
        return res*res;
    }
};

/*
    Approach-3 Using Iteration
    Time Complexity:  O(e)
    Space Complexity: O(1)
*/
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if(e==0) return 1;
        double res = 1;
        for(int i=1;i<=abs(e);i++){
            res*=b;
        }
        if(e>0) return res;
        return (double)1/res;
    }
};

/*
    Approach-4 Using Recursion
    Time Complexity:  O(e)
    Space Complexity: O(e)
*/
class Solution {
  public:
    double power(double b, int e) {
        // code here
        if(e==0)return 1;
        if(e<0) return  1/power(b,-e);
        return b*power(b,e-1);
    }
};

