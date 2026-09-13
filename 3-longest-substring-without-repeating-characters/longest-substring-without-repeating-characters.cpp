class Solution {
public:
    int lengthOfLongestSubstring(string s) {
                vector<int> lastIndex(256, -1); // store last seen index of each char
        int maxLen = 0;
        int left = 0; // left pointer of sliding window

        for (int right = 0; right < s.size(); right++) {
            // if character was seen before and is inside current window
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1; // move left pointer
            }
            lastIndex[s[right]] = right; // update last seen index
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
    };
    