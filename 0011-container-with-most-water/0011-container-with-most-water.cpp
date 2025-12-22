class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxV = 0;
        int l = 0;
        int r = height.size()-1;

        while(l<r){
            int volume = (r-l)*min(height[r],height[l]);
            if(volume<=maxV){
                if(height[r] == height[l]){
                    r--;
                    l++;
                }
                else if(height[r]<height[l]){
                    r--;
                }
                else{
                    l++;
                }
                continue;
            }
            else{
                maxV = volume;
            }
        }

        return maxV;
    }
};