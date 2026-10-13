
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {

        int i = 0;
        vector<vector<int>> res;

        // Step 1: Insert intervals before newInterval
        while (i < intervals.size() &&
               newInterval[0] > intervals[i][1]) {
            res.push_back(intervals[i]);
            i = i + 1;
        }

        // Step 2: Merge overlapping intervals
        while (i < intervals.size() &&
               intervals[i][0] <= newInterval[1]) {

            // Update newInterval
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);

            i = i + 1;
        }

        // Step 3: Insert newInterval into res
        res.push_back(newInterval);

        // Step 4: Insert remaining intervals
        while (i < intervals.size()) {
            res.push_back(intervals[i]);
            i = i + 1;
        }

        // Convert res into output array
        return res;
    }
};