class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxl = height[0];
        int maxr = height[n-1];
        int i = 1;
        int j = n-1;
        int water = 0;
        while(i<=j){
            if(maxl<=maxr){
                int curr = min(maxl, maxr) - height[i];
                if(curr>0){
                    water = water + curr;
                }
                maxl = max(maxl, height[i]);
                i++;
            }
            else{
                int curr = min(maxl, maxr) - height[j];
                if(curr>0){
                    water = water + curr;
                }
                maxr = max(maxr, height[j]);
                j--;
            }
        }
        return water;
    }
};