class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int temp=0;
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        i=0;
        k=k%nums.size();
        int n=k;
        while(i<k-1){
            int t=0;
            t=nums[i];
            nums[i]=nums[k-1];
            nums[k-1]=t;
            i++;
            k--;
        }
        k=n;
        i=k;
        j=nums.size()-1;
        while(i<j){
            int h=0;
            h=nums[i];
            nums[i]=nums[j];
            nums[j]=h;
            i++;
            j--;
        }

    }
};