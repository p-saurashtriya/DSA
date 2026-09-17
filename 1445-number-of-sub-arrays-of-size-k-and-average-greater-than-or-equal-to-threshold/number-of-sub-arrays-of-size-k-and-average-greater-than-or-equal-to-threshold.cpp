/*class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int maxT = k * threshold;
        int count = 0;
        for(int i = 0; i<=arr.size()-k; i++){
            int sum = 0;
            for(int j = i ; j<i+k;j++){
                sum += arr[j];

            }
            if(sum >= maxT){
                count++;

            }
        }
        return count;
    }
};
*/


class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int maxT = k * threshold;

        // First window ka sum
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int count = 0;

        // First window check
        if (sum >= maxT) {
            count++;
        }

        // Sliding Window
        for (int i = k; i < arr.size(); i++) {
            sum = sum + arr[i];       // new element add
            sum = sum - arr[i - k];   // old element remove

            if (sum >= maxT) {
                count++;
            }
        }

        return count;
    }
};
