class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];

        }while(slow != fast);
         slow = 0;
        while(slow != fast){
            slow  = nums[slow];
            fast = nums[fast];

        }
        return slow;
    }
};




/*class Solution {
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
    */