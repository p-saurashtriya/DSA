/*class Solution {
public:
bool isoverlap(vector<int> &a , vector<int> &b){
    return a[1] >= b[0] && b[1] >= a[0];
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> list = intervals;
        bool isMergeHappened = true;
        while(isMergeHappened){
            isMergeHappened = false;
            for(int i = 0;i<(int)list.size(); i++){
                int j = i+1;
                while(j<(int)list.size()){
                    if(isoverlap(list[i], list[j])){
                      list[i][0] =  min(list[i][0], list[j][0]);
                      list[i][1] =  max(list[i][1], list[j][1]); 
                      list.erase(list.begin()+j);
                      isMergeHappened = true;

                    }else{
                        j++;
                    }
                   
                }
            }

        }
        return list;
    }
};
*/





class Solution {
public:
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
     [](vector<int> &a, vector<int> &b){
        return a[0] < b[0];
     });
   vector<vector<int>> list ;
   list.push_back(intervals[0]);


   for(int i = 1; i<intervals.size(); i++){
    vector<int> & prev =list.back();
     vector<int> & curr = intervals[i];


     if(curr[0] <= prev[1]){
        prev[0] = min(prev[0], curr[0]);
        prev[1] = max(prev[1], curr[1]);
     
     }else{
        list.push_back(curr);
     }
   }
   return list;
 }
};







 