class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int size = INT_MAX;
        int sum = 0;
        int i = 0;
        int j = 0;
        while(j<n){
            sum += nums[j];
            while(sum >= target){
                size = min(size, j-i+1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return size == INT_MAX ? 0 : size;
        
    }
};