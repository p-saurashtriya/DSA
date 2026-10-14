class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        // Step 1: Sort intervals by start time
        // If start times are equal, sort end time in descending order
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 if (a[0] != b[0])
                     return a[0] < b[0];

                 return a[1] > b[1];
             });

        // Step 2: Count intervals that are not covered
        int count = 1;
        int maxEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][1] > maxEnd) {
                count++;
                maxEnd = intervals[i][1];
            }
        }

        return count;
    }
};
    