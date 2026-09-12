#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
bool isPalindrome(int left, int right, string& s) {

    if(left <= right && !isalnum(s[left]))
        return isPalindrome(left + 1, right, s);

    if(left <= right && !isalnum(s[right]))
        return isPalindrome(left, right - 1, s);

    if(left >= right)
        return true;

    if(tolower(s[left]) != tolower(s[right]))
        return false;

    return isPalindrome(left + 1, right - 1, s);
}
    bool isPalindrome(string s){
    return isPalindrome(0, s.size() - 1, s);
    }
};