class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int i = 0;
        int j = 0;
        while(i<firstList.size()&&j<secondList.size()){
            int s1= firstList[i][0],
                e1= firstList[i][1],
                s2= secondList[j][0],
                e2= secondList[j][1];
                if(e1 >= s2 && e2 >= s1){
                    res.push_back({
                        max(s1,s2),
                        min(e1,e2)
                    });
                }
                if(e1<e2){
                    i++;
                }else{
                    j++;
                }
        }
        return res;
        
    }
};