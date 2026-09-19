class Solution {
public:
    int fib(int n) {
        //Base case 
        if(n <= 1)
        return n;

        // yaha pe number tabtak recursively solve hoga jabtak vo base case ko satisfy na karde 
        int last  = fib(n-1);
        int slast = fib(n-2);
        return last + slast;
    }
};