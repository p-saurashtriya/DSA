class Solution {
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