class Solution {
public:
    string reverseWords(string s) {
        int S = 0;
        for(int i = 0; i <= s.length(); i++){
            if(i==s.length() || s[i] == ' '){
                reverse(s.begin() + S, s.begin()+i);
                S = i+1;
            }
        }
        return s;
    }
};