class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        
        int i = 0;
        int k = n - 1;
        
        for (int j = 0; j < n; j++) {
            if (nums[j] < pivot) {
                ans[i] = nums[j];
                i++;
            }
        }
        
        for (int j = n - 1; j >= 0; j--) {
            if (nums[j] > pivot) {
                ans[k] = nums[j];
                k--;
            }
        }
        
        while (i <= k) {
            ans[i] = pivot;
            i++;
        }
        
        return ans;
    }
};