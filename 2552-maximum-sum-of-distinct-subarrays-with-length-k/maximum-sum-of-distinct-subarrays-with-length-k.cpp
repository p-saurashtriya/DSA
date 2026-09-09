
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long window_sum = 0, max_sum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            // Add current element
            freq[nums[right]]++;
            window_sum += nums[right];

            // Shrink window if size exceeds k
            if (right - left + 1 > k) {
                freq[nums[left]]--;
                window_sum -= nums[left];
                if (freq[nums[left]] == 0) freq.erase(nums[left]);
                left++;
            }

            // Check distinct condition
            if (right - left + 1 == k && freq.size() == k) {
                max_sum = max(max_sum, window_sum);
            }
        }
        return max_sum;
    }
};
