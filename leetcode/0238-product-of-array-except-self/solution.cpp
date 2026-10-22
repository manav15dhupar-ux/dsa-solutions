class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int count = 0;
        int x = 1;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0)
                count++;
            else
                x *= arr[i];
        }

        if (count > 1) {
            for (int i = 0; i < n; i++)
                ans.push_back(0);
        }
        else if (count == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0)
                    ans.push_back(x);
                else
                    ans.push_back(0);
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                ans.push_back(x / arr[i]);
            }
        }

        return ans;
    }
};