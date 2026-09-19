class Solution {
public:
    bool Palindrome(int i, int j, string& s) {

        // yeh part hai alphanumeric vala
        //yaha pe humne Notaplhanumeric vali condition li hai.
        if(i < s.size()&& !isalnum(s[i])){
            return Palindrome(i + 1, j, s);
        }
        if(j < s.size() && !isalnum(s[j])){
            return Palindrome(i, j - 1, s);
        }
        //Yaha se base case agya, base case pehle yaa baad mai kabhi bhi laga do based on logic
        if(i >= j)
        return true;

        //main case compare kardiya
        if(tolower(s[i]) != tolower(s[j]))
        return false;

        return Palindrome(i + 1, j - 1, s);
    }

    bool isPalindrome(string x){
        string s = x;
        return Palindrome(0, s.size() - 1, s); 
    }
};