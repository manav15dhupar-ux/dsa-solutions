class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int index1 = 0;
        int index2 = n-1;
        while(index1 < index2){
            int sum = arr[index1]+arr[index2];
            if(sum == target) return {index1+1,index2+1};
            else if(sum > target) index2--;
            else if(sum < target) index1++;
        }
        return {};
    }
};