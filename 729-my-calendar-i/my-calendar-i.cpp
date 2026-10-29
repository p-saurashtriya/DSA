class MyCalendar {
    vector<pair<int,int>> booking;

public:
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto &booking : booking){
            int s1 = booking.first;
            int e1= booking.second;
            if(startTime < e1 & s1 < endTime){
                return false;
            }
        }
        booking.push_back({startTime , endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */