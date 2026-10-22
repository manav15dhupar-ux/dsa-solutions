class Solution {
public:
    int possible(vector<int>& arr, int k, int h){
        int n = arr.size();
        long long time = 0;
        for(int i=0; i<n; i++){
           time += ceil(arr[i]*1.0/k);
        }
        if(time <=h) return 1;
        return 0;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int s=1;
        int n= arr.size();
        int e= INT_MIN;
        for(int i=0; i<n ;i++){
            e=max(e, arr[i]);
        }
        int ans =e;

        while(s<=e){
            int mid = (s+e)/2;
            if(possible(arr,mid,h)){
                ans = mid;
                e= mid-1;
            }
            else s = mid +1;
        }
        return ans;
    }
};