class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();
        
        int currsum = 0;
        int maxsum = INT_MIN;

        // First window
        for(int i = 0; i < k; i++) {
            currsum += arr[i];
        }

        maxsum = currsum;

        // Slide the window
        for(int i = k; i < n; i++) {
            currsum += arr[i];
            currsum -= arr[i - k];

            maxsum = max(maxsum, currsum);
        }

        return (double)maxsum / k;
    }
};