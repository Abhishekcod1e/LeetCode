class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> jol;
        int i = num.size() - 1;
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                i--;
            }
            jol.push_back(k % 10);
            k /= 10;              
        }
        reverse(jol.begin(), jol.end());
        return jol;
    }
};