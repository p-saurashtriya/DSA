class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        //merge overlapping meeting

        vector<vector<int>> res;
        res.push_back(meetings[0]);
        for(int i = 1; i<meetings.size(); i++){
            if(meetings[i][0] <= res.back()[1]){
                res.back()[1] = max(res.back()[1],meetings[i][1]);
            }else{
                res.push_back(meetings[i]);
            }
        }
        int gap = 0;
        //first
         gap += res[0][0] - 1;
         //between
         for(int i = 1; i<res.size(); i++){
            gap += res[i][0] - res[i-1][1] -1;
         }
         //last
         gap += days - res.back()[1];
         return gap;
    }
};