class Solution {
public:
    int trap(vector<int>& height) {
        int units = 0;
        int l = 0;
        int r = height.size()-1;
        int maxL = 0;
        int maxR = 0;

        while(l<=r){
            if(maxL<=maxR){
                maxL = max(maxL,height[l]);
                units += maxL - height[l];
                l++;
            }
            else{
                maxR = max(maxR,height[r]);
                units += maxR - height[r];
                r--;
            }
        }

        return units;
    }
};