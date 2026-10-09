/*class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];

        }while(slow != fast);
        int n1 = 0;
        int n2 = slow;
        while(n1 != n2){
            n1 = nums[1];
            n2 = nums[n2];

        }
        return n1;
    }
};*/




class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int num : nums){
            if(st.find(num) != st.end()){
                return num;
            }
            st.insert(num);
        }
        return -1;
    }};