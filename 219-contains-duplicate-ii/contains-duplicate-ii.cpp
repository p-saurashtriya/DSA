#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastSeen; // stores number → last index
        for (int i = 0; i < nums.size(); i++) {
            if (lastSeen.count(nums[i]) && i - lastSeen[nums[i]] <= k) {
                return true;
            }
            lastSeen[nums[i]] = i; // update last index
        }
        return false;
    }
};
