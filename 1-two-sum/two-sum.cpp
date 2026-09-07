class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int>mp;
        for(int i = 0; i<nums.size();i++){
        int lookingfor= target-nums[i];
        if(mp.find(lookingfor)!=mp.end()){
            return{i,mp[lookingfor]};
              }
              mp[nums[i]] = i;
        }
        return{};
        
    }
};