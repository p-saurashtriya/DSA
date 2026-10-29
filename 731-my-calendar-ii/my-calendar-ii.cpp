/*class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        
    }
};*/

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */

/*
class MyCalendarTwo {
    vector<pair<int,int>> booked;   // all booked intervals
    vector<pair<int,int>> overlaps; // intervals that are already double booked
    
public:
    MyCalendarTwo() { }
    
    bool book(int start, int end) {
        // Step 1: Check if new event overlaps with any double-booked interval
        for (auto &ov : overlaps) {
            if (max(start, ov.first) < min(end, ov.second)) {
                return false; // triple booking would occur
            }
        }
        
        // Step 2: Record new overlaps with existing single bookings
        for (auto &bk : booked) {
            if (max(start, bk.first) < min(end, bk.second)) {
                overlaps.push_back({max(start, bk.first), min(end, bk.second)});
            }
        }
        
        // Step 3: Add new booking
        booked.push_back({start, end});
        return true;
    }
};
*/


class MyCalendarTwo {
    map<int, int> events;
    
public:
    MyCalendarTwo() { }
    
    bool book(int startTime, int endTime) {
        events[startTime]++;
        events[endTime]--;
        int activeBooking = 0;
        for(auto &event : events ){
           activeBooking += event.second;
           if(activeBooking >= 3){
            events[startTime]--;
            events[endTime]++;


            return false;
           }
        }
        return true;
    }
} ;

