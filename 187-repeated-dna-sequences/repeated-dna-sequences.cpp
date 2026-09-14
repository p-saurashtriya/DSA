class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> seen;
        unordered_set<string> repeated;
        vector<string> result;
        for(int i = 0; i<=(int)s.length()-10;i++){
            string dna = s.substr(i,10);
            if(seen.count(dna)){
                repeated.insert(dna);
 }
 seen.insert(dna);
        }
        for(auto dna : repeated){
            result.push_back(dna);
        }
        return result;
        
    }
};