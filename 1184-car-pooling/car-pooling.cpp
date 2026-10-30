class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> events;

        for (auto& trip : trips) {
            events[trip[1]] += trip[0]; // pickup
            events[trip[2]] -= trip[0]; // drop-off
        }

        int passengers = 0;

        for (auto& [location, change] : events) {
            passengers += change;

            if (passengers > capacity)
                return false;
        }

        return true;

    }
};