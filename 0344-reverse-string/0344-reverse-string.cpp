class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseString(0, s);
    }

    void reverseString(int i, vector<char>& s) {

        if(i >= s.size() / 2)
            return;

        swap(s[i], s[s.size() - i - 1]);

        reverseString(i + 1, s);
    }
};