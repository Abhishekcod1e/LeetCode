class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int m=nums1.size();
        int n=nums2.size();
        int i=0;
        int j=0;
        while(i<n || j<m){
            if(i<n){
                nums3.push_back(nums2[i]);
                i++;
            }
            if(j<m){
                nums3.push_back(nums1[j]);
                j++;
            }

        }
        sort(nums3.begin(),nums3.end());
        int l=nums3.size();
        float median;
        if(l%2==0){ // 1 2 3 4
            median=(float)(nums3[(l/2-1)]+nums3[(l/2)])/2;
            return median ;
        }
        else{
            return nums3[(l/2)];
        }
    }
};