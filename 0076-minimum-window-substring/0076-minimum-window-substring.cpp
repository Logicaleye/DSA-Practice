class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        std::vector<int> map(128, 0);
        int count = t.length();
        int start = 0, end = 0, minLen = INT_MAX, startIndex = 0;
        for (char c : t) {
            map[c]++;
        }

        while (end < s.length()) {
    // If the character at s[end] is desired in t, decrease the match count
    if (map[s[end]] > 0) {
        count--;
    }
    map[s[end]]--; // Include s[end] in the window
    end++;

    // When a valid window is found (all characters matched)
    while (count == 0) {
        // Update the minimum window data
        if (end - start < minLen) {
            minLen = end - start;
            startIndex = start;
        }

        map[s[start]]++; // Exclude s[start] from the window
        // If the excluded character was part of string t, increase the match count
        if (map[s[start]] > 0) {
            count++;
        }
        start++; // Shrink the window from the left
    }
}

return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);

    }
};